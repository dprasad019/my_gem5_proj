/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__InstDisassembler__
#define __PARAMS__InstDisassembler__

namespace gem5 {
namespace trace {
class InstDisassembler;
} // namespace trace
} // namespace gem5

#include "params/SimObject.hh"

namespace gem5
{
struct InstDisassemblerParams
    : public SimObjectParams
{
    gem5::trace::InstDisassembler * create() const;
};

} // namespace gem5

#endif // __PARAMS__InstDisassembler__
