/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__GenericArmPciHost__
#define __PARAMS__GenericArmPciHost__

namespace gem5 {
class GenericArmPciHost;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/ArmPciIntRouting.hh"

#include "params/GenericPciHost.hh"

#include "enums/ArmPciIntRouting.hh"

namespace gem5
{
struct GenericArmPciHostParams
    : public GenericPciHostParams
{
    gem5::GenericArmPciHost * create() const;
    unsigned int_base;
    unsigned int_count;
    enums::ArmPciIntRouting int_policy;
};

} // namespace gem5

#endif // __PARAMS__GenericArmPciHost__
