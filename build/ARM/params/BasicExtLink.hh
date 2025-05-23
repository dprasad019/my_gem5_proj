/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__BasicExtLink__
#define __PARAMS__BasicExtLink__

namespace gem5 {
namespace ruby {
class BasicExtLink;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "params/RubyController.hh"
#include <cstddef>
#include "params/BasicRouter.hh"

#include "params/BasicLink.hh"

namespace gem5
{
struct BasicExtLinkParams
    : public BasicLinkParams
{
    gem5::ruby::BasicExtLink * create() const;
    gem5::ruby::AbstractController * ext_node;
    gem5::ruby::BasicRouter * int_node;
};

} // namespace gem5

#endif // __PARAMS__BasicExtLink__
