/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__MpamMSC__
#define __PARAMS__MpamMSC__

namespace gem5 {
namespace mpam {
class MSC;
} // namespace mpam
} // namespace gem5

#include "params/PartitionManager.hh"

namespace gem5
{
struct MpamMSCParams
    : public PartitionManagerParams
{
    gem5::mpam::MSC * create() const;
};

} // namespace gem5

#endif // __PARAMS__MpamMSC__
