/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__AmbaIntDevice__
#define __PARAMS__AmbaIntDevice__

namespace gem5 {
class AmbaIntDevice;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/ArmInterruptPin.hh"

#include "params/AmbaPioDevice.hh"

namespace gem5
{
struct AmbaIntDeviceParams
    : public AmbaPioDeviceParams
{
    Tick int_delay;
    gem5::ArmInterruptPinGen * interrupt;
};

} // namespace gem5

#endif // __PARAMS__AmbaIntDevice__
