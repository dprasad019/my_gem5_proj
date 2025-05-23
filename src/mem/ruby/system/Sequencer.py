# Copyright (c) 2020 ARM Limited
# All rights reserved.
#
# The license below extends only to copyright in the software and shall
# not be construed as granting a license to any other intellectual
# property including but not limited to intellectual property relating
# to a hardware implementation of the functionality of the software
# licensed hereunder.  You may use the software subject to the license
# terms below provided that you ensure that this notice is replicated
# unmodified and in its entirety in all distributions of the software,
# modified or unmodified, in source code or in binary form.
#
# Copyright (c) 2009 Advanced Micro Devices, Inc.
# Copyright (c) 2020 ARM Limited
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

from m5.objects.ClockedObject import ClockedObject
from m5.params import *
from m5.proxy import *


class RubyPort(ClockedObject):
    type = "RubyPort"
    abstract = True
    cxx_header = "mem/ruby/system/RubyPort.hh"
    cxx_class = "gem5::ruby::RubyPort"

    version = Param.Int(0, "")

    in_ports = VectorResponsePort(
        "CPU side of this RubyPort/Sequencer. "
        "The CPU request ports should be connected to this. If a CPU "
        "has multiple ports (e.g., I/D ports) all of the ports for a "
        "single CPU can connect to one RubyPort."
    )
    slave = DeprecatedParam(in_ports, "`slave` is now called `in_ports`")

    interrupt_out_port = VectorRequestPort(
        "Port to connect to x86 interrupt "
        "controller to send the CPU requests from outside."
    )
    master = DeprecatedParam(
        interrupt_out_port, "`master` is now called `interrupt_out_port`"
    )

    pio_request_port = RequestPort("Ruby pio request port")
    pio_master_port = DeprecatedParam(
        pio_request_port, "`pio_master_port` is now called `pio_request_port`"
    )

    mem_request_port = RequestPort("Ruby mem request port")
    mem_master_port = DeprecatedParam(
        mem_request_port, "`mem_master_port` is now called `mem_request_port`"
    )

    pio_response_port = ResponsePort("Ruby pio response port")
    pio_slave_port = DeprecatedParam(
        pio_response_port, "`pio_slave_port` is now called `pio_response_port`"
    )

    using_ruby_tester = Param.Bool(False, "")
    no_retry_on_stall = Param.Bool(False, "")
    ruby_system = Param.RubySystem("Parent RubySystem object")
    system = Param.System(Parent.any, "system object")
    support_data_reqs = Param.Bool(True, "data cache requests supported")
    support_inst_reqs = Param.Bool(True, "inst cache requests supported")
    is_cpu_sequencer = Param.Bool(True, "connected to a cpu")


class RubyPortProxy(RubyPort):
    type = "RubyPortProxy"
    cxx_header = "mem/ruby/system/RubyPortProxy.hh"
    cxx_class = "gem5::ruby::RubyPortProxy"


class RubySequencer(RubyPort):
    type = "RubySequencer"
    cxx_class = "gem5::ruby::Sequencer"
    cxx_header = "mem/ruby/system/Sequencer.hh"

    dcache = Param.RubyCache("")

    max_outstanding_requests = Param.Int(
        16, "max requests (incl. prefetches) outstanding"
    )
    deadlock_threshold = Param.Cycles(
        500000,
        "max outstanding cycles for a request "
        "before deadlock/livelock declared",
    )
    garnet_standalone = Param.Bool(False, "")
    # id used by protocols that support multiple sequencers per controller
    # 99 is the dummy default value
    coreid = Param.Int(99, "CorePair core id")

    def connectCpuPorts(self, cpu):
        """
        Helper for connecting all cpu memory request output ports to this
        object's in_ports.
        This assumes the provided cpu object is an instance of BaseCPU. Non-cpu
        objects should use connectInstPort and connectDataPort.
        """
        import m5.objects

        assert isinstance(cpu, m5.objects.BaseCPU)
        # this connects all cpu mem-side ports to self.in_ports
        cpu.connectAllPorts(
            self.in_ports, self.in_ports, self.interrupt_out_port
        )

    def connectIOPorts(self, piobus):
        """
        Helper for connecting this object's IO request and response ports to
        the provided bus object. Usually a iobus object is used to wireup IO
        components in a full system simulation. Incoming/Outgoing IO requests
        do not go though the SLICC protocol so the iobus must be connected to
        the sequencer directly.
        """
        self.pio_request_port = piobus.cpu_side_ports
        self.mem_request_port = piobus.cpu_side_ports
        self.pio_response_port = piobus.mem_side_ports


class RubyHTMSequencer(RubySequencer):
    type = "RubyHTMSequencer"
    cxx_class = "gem5::ruby::HTMSequencer"
    cxx_header = "mem/ruby/system/HTMSequencer.hh"


class DMASequencer(RubyPort):
    type = "DMASequencer"
    cxx_header = "mem/ruby/system/DMASequencer.hh"
    cxx_class = "gem5::ruby::DMASequencer"

    max_outstanding_requests = Param.Int(64, "max outstanding requests")
