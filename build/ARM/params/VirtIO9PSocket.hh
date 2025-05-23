/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__VirtIO9PSocket__
#define __PARAMS__VirtIO9PSocket__

namespace gem5 {
class VirtIO9PSocket;
} // namespace gem5
#include <cstddef>
#include <string>
#include <cstddef>
#include <string>

#include "params/VirtIO9PProxy.hh"

namespace gem5
{
struct VirtIO9PSocketParams
    : public VirtIO9PProxyParams
{
    gem5::VirtIO9PSocket * create() const;
    std::string port;
    std::string server;
};

} // namespace gem5

#endif // __PARAMS__VirtIO9PSocket__
