/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__AddrMapper__
#define __PARAMS__AddrMapper__

namespace gem5 {
class AddrMapper;
} // namespace gem5

#include "params/SimObject.hh"

namespace gem5
{
struct AddrMapperParams
    : public SimObjectParams
{
    unsigned int port_mem_side_port_connection_count;
    unsigned int port_cpu_side_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__AddrMapper__
