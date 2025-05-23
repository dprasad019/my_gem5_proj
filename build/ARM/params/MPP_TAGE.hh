/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__MPP_TAGE__
#define __PARAMS__MPP_TAGE__

namespace gem5 {
namespace branch_prediction {
class MPP_TAGE;
} // namespace branch_prediction
} // namespace gem5
#include <vector>
#include "base/types.hh"

#include "params/TAGEBase.hh"

namespace gem5
{
struct MPP_TAGEParams
    : public TAGEBaseParams
{
    gem5::branch_prediction::MPP_TAGE * create() const;
    std::vector< unsigned > tunedHistoryLengths;
};

} // namespace gem5

#endif // __PARAMS__MPP_TAGE__
