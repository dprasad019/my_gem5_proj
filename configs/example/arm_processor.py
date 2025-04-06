import m5
import os
from m5.objects import *

# Create the system
system = System()

# Set clock and voltage domain
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = "4GHz"
system.clk_domain.voltage_domain = VoltageDomain()

# Set up memory system
system.mem_mode = "timing"
system.mem_ranges = [AddrRange("32GB")]

# Create a 4-core Out-of-Order ARM CPU
system.cpu = [O3CPU() for i in range(4)]

# Create L1 Instruction and Data Caches (64KB, 2-way, 2 cycles)
for cpu in system.cpu:
    cpu.icache = BaseCache(size="64kB", assoc=2, tag_latency=2, data_latency=2)
    cpu.dcache = BaseCache(size="64kB", assoc=2, tag_latency=2, data_latency=2)
    cpu.icache.cpu_side = cpu.icache_port
    cpu.dcache.cpu_side = cpu.dcache_port

# Create L2 Cache (2MB, 8-way, 20 cycles)
system.l2bus = L2XBar()
system.l2cache = BaseCache(size="2MB", assoc=8, tag_latency=20, data_latency=20)

# Connect L1 to L2
for cpu in system.cpu:
    cpu.icache.mem_side = system.l2bus.cpu_side_ports
    cpu.dcache.mem_side = system.l2bus.cpu_side_ports

system.l2cache.cpu_side = system.l2bus.mem_side_ports

# Create LLC (16MB, 16-way, 32 cycles)
system.llc_bus = L2XBar()
system.llc_cache = BaseCache(size="16MB", assoc=16, tag_latency=32, data_latency=32)

# Connect L2 to LLC
system.l2cache.mem_side = system.llc_bus.cpu_side_ports
system.llc_cache.cpu_side = system.llc_bus.mem_side_ports

# Create main memory bus
system.membus = SystemXBar()

# Connect LLC to memory bus
system.llc_cache.mem_side = system.membus.cpu_side_ports

# Create DDR-based PCM Memory (32GB, 150ns read, 500ns write)
system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.dram.read_latency = "150ns"
system.mem_ctrl.dram.write_latency = "500ns"
system.mem_ctrl.port = system.membus.mem_side_ports

# Connect the system to the membus
system.system_port = system.membus.cpu_side_ports

# Create a process for a simple "Hello World" application
process = Process()
thispath = os.path.dirname(os.path.realpath(__file__))
binpath = os.path.join(thispath, "../../../", "tests/test-progs/hello/bin/arm/linux/hello")
process.cmd = [binpath]

# Assign process to first CPU
system.cpu[0].workload = process
system.cpu[0].createThreads()

# Set workload compatibility
system.workload = SEWorkload.init_compatible(binpath)

# Instantiate and run the simulation
root = Root(full_system=False, system=system)
m5.instantiate()

print("Beginning simulation!")
exit_event = m5.simulate()
print(f"Exiting @ tick {m5.curTick()} because {exit_event.getCause()}")

