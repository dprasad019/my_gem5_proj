/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__VGic__
#define __PARAMS__VGic__

namespace gem5 {
class VGic;
} // namespace gem5
#include <cstddef>
#include "params/BaseGic.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/Platform.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/PioDevice.hh"

namespace gem5
{
struct VGicParams
    : public PioDeviceParams
{
    gem5::VGic * create() const;
    gem5::BaseGic * gic;
    uint32_t gicv_iidr;
    Addr hv_addr;
    uint32_t maint_int;
    Tick pio_delay;
    gem5::Platform * platform;
    Addr vcpu_addr;
};

} // namespace gem5

#endif // __PARAMS__VGic__
