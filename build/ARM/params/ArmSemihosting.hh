/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__ArmSemihosting__
#define __PARAMS__ArmSemihosting__

namespace gem5 {
class ArmSemihosting;
} // namespace gem5

#include "params/BaseSemihosting.hh"

namespace gem5
{
struct ArmSemihostingParams
    : public BaseSemihostingParams
{
    gem5::ArmSemihosting * create() const;
};

} // namespace gem5

#endif // __PARAMS__ArmSemihosting__
