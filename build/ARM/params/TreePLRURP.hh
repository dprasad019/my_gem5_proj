/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__TreePLRURP__
#define __PARAMS__TreePLRURP__

namespace gem5 {
namespace replacement_policy {
class TreePLRU;
} // namespace replacement_policy
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/BaseReplacementPolicy.hh"

namespace gem5
{
struct TreePLRURPParams
    : public BaseReplacementPolicyParams
{
    gem5::replacement_policy::TreePLRU * create() const;
    int num_leaves;
};

} // namespace gem5

#endif // __PARAMS__TreePLRURP__
