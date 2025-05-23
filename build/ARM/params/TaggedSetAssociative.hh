/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__TaggedSetAssociative__
#define __PARAMS__TaggedSetAssociative__

namespace gem5 {
class TaggedSetAssociative;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/TaggedIndexingPolicy.hh"

namespace gem5
{
struct TaggedSetAssociativeParams
    : public TaggedIndexingPolicyParams
{
    gem5::TaggedSetAssociative * create() const;
    int entry_size;
    uint64_t size;
};

} // namespace gem5

#endif // __PARAMS__TaggedSetAssociative__
