/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__RubyPort__
#define __PARAMS__RubyPort__

namespace gem5 {
namespace ruby {
class RubyPort;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "params/RubySystem.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct RubyPortParams
    : public ClockedObjectParams
{
    bool is_cpu_sequencer;
    bool no_retry_on_stall;
    gem5::ruby::RubySystem * ruby_system;
    bool support_data_reqs;
    bool support_inst_reqs;
    gem5::System * system;
    bool using_ruby_tester;
    int version;
    unsigned int port_in_ports_connection_count;
    unsigned int port_interrupt_out_port_connection_count;
    unsigned int port_pio_request_port_connection_count;
    unsigned int port_mem_request_port_connection_count;
    unsigned int port_pio_response_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__RubyPort__
