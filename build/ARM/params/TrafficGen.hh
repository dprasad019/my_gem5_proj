/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__TrafficGen__
#define __PARAMS__TrafficGen__

namespace gem5 {
class TrafficGen;
} // namespace gem5
#include <cstddef>
#include <string>

#include "params/BaseTrafficGen.hh"

namespace gem5
{
struct TrafficGenParams
    : public BaseTrafficGenParams
{
    gem5::TrafficGen * create() const;
    std::string config_file;
};

} // namespace gem5

#endif // __PARAMS__TrafficGen__
