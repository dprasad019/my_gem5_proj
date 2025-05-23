/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__IsaFake__
#define __PARAMS__IsaFake__

namespace gem5 {
class IsaFake;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <string>

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct IsaFakeParams
    : public BasicPioDeviceParams
{
    gem5::IsaFake * create() const;
    bool fake_mem;
    Addr pio_size;
    bool ret_bad_addr;
    uint16_t ret_data16;
    uint32_t ret_data32;
    uint64_t ret_data64;
    uint8_t ret_data8;
    bool update_data;
    std::string warn_access;
};

} // namespace gem5

#endif // __PARAMS__IsaFake__
