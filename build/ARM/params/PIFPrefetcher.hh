/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__PIFPrefetcher__
#define __PARAMS__PIFPrefetcher__

namespace gem5 {
namespace prefetch {
class PIF;
} // namespace prefetch
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/TaggedIndexingPolicy.hh"
#include <cstddef>
#include "params/BaseReplacementPolicy.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/QueuedPrefetcher.hh"

namespace gem5
{
struct PIFPrefetcherParams
    : public QueuedPrefetcherParams
{
    gem5::prefetch::PIF * create() const;
    unsigned compactor_entries;
    unsigned history_buffer_size;
    unsigned index_assoc;
    uint64_t index_entries;
    gem5::IndexingPolicyTemplate<gem5::TaggedTypes> * index_indexing_policy;
    gem5::replacement_policy::Base * index_replacement_policy;
    unsigned prec_spatial_region_bits;
    unsigned stream_address_buffer_entries;
    unsigned succ_spatial_region_bits;
};

} // namespace gem5

#endif // __PARAMS__PIFPrefetcher__
