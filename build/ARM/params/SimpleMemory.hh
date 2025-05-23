/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__SimpleMemory__
#define __PARAMS__SimpleMemory__

namespace gem5 {
namespace memory {
class SimpleMemory;
} // namespace memory
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/AbstractMemory.hh"

namespace gem5
{
struct SimpleMemoryParams
    : public AbstractMemoryParams
{
    gem5::memory::SimpleMemory * create() const;
    float bandwidth;
    Tick latency;
    Tick latency_var;
    unsigned int port_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__SimpleMemory__
