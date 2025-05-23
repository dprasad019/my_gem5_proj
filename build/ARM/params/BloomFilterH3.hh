/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__BloomFilterH3__
#define __PARAMS__BloomFilterH3__

namespace gem5 {
namespace bloom_filter {
class H3;
} // namespace bloom_filter
} // namespace gem5

#include "params/BloomFilterMultiBitSel.hh"

namespace gem5
{
struct BloomFilterH3Params
    : public BloomFilterMultiBitSelParams
{
    gem5::bloom_filter::H3 * create() const;
};

} // namespace gem5

#endif // __PARAMS__BloomFilterH3__
