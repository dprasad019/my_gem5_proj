/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__Scp2ApDoorbell__
#define __PARAMS__Scp2ApDoorbell__

namespace gem5 {
class Scp2ApDoorbell;
} // namespace gem5
#include <cstddef>
#include "params/ArmInterruptPin.hh"

#include "params/MhuDoorbell.hh"

namespace gem5
{
struct Scp2ApDoorbellParams
    : public MhuDoorbellParams
{
    gem5::Scp2ApDoorbell * create() const;
    gem5::ArmInterruptPinGen * interrupt;
};

} // namespace gem5

#endif // __PARAMS__Scp2ApDoorbell__
