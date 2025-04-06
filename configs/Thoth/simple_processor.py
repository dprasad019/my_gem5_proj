import m5
from m5.objects import *
import os

system = System()

# Clock Domain
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = "4GHz"
system.clk_domain.voltage_domain = VoltageDomain()

# Memory Mode & Ranges
system.mem_mode = "timing"
system.mem_ranges = [AddrRange("512MiB")]

# CPU Configuration (4-core, X86, Out-of-Order)
system.cpu = [O3CPU() for _ in range(4)]

# System Bus
system.membus = SystemXBar()

# L1 Cache (64KB, 2-Way, 2-Cycle Latency)
class L1Cache(Cache):
    size = "64kB"
    assoc = 2
    tag_latency = 2
    data_latency = 2
    response_latency = 2
    mshrs = 4
    tgts_per_mshr = 16

# L2 Cache (2MB, 8-Way, 20-Cycle Latency)
class L2Cache(Cache):
    size = "2MB"
    assoc = 8
    tag_latency = 20
    data_latency = 20
    response_latency = 20
    mshrs = 16
    tgts_per_mshr = 32

# LLC (L3 Cache, 16MB, 16-Way, 32-Cycle Latency)
class L3Cache(Cache):
    size = "16MB"
    assoc = 16
    tag_latency = 32
    data_latency = 32
    response_latency = 32
    mshrs = 32
    tgts_per_mshr = 64

# Cache Hierarchy
system.l2bus = L2XBar()
system.llcbus = L2XBar()

system.l3cache = L3Cache()
system.l3cache.cpu_side = system.llcbus.mem_side_ports
system.l3cache.mem_side = system.membus.cpu_side_ports

for cpu in system.cpu:
    cpu.icache = L1Cache()
    cpu.dcache = L1Cache()
    cpu.icache.cpu_side = cpu.icache_port
    cpu.dcache.cpu_side = cpu.dcache_port
    cpu.icache.mem_side = system.l2bus.cpu_side_ports
    cpu.dcache.mem_side = system.l2bus.cpu_side_ports
    cpu.createInterruptController()

system.l2cache = L2Cache()
system.l2cache.cpu_side = system.l2bus.mem_side_ports
system.l2cache.mem_side = system.llcbus.cpu_side_ports

# Memory Controller
system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports

# System Port
system.system_port = system.membus.cpu_side_ports

# Workload Configuration
thispath = os.path.dirname(os.path.realpath(__file__))
binary = os.path.join(thispath, "../../../tests/test-progs/hello/bin/x86/linux/hello")
system.workload = SEWorkload.init_compatible(binary)

# Process Setup
for cpu in system.cpu:
    process = Process()
    process.cmd = [binary]
    cpu.workload = process
    cpu.createThreads()

# Root System Setup
root = Root(full_system=False, system=system)
m5.instantiate()

print("Beginning simulation!")
exit_event = m5.simulate()
print(f"Exiting @ tick {m5.curTick()} because {exit_event.getCause()}")

