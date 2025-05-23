/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__EtherDump__
#define __PARAMS__EtherDump__

namespace gem5 {
class EtherDump;
} // namespace gem5
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct EtherDumpParams
    : public SimObjectParams
{
    gem5::EtherDump * create() const;
    std::string file;
    int maxlen;
};

} // namespace gem5

#endif // __PARAMS__EtherDump__
