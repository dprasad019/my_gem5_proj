/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__QemuFwCfgItem__
#define __PARAMS__QemuFwCfgItem__

namespace gem5 {
namespace qemu {
class FwCfgItemFactoryBase;
} // namespace qemu
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>

#include "params/SimObject.hh"

namespace gem5
{
struct QemuFwCfgItemParams
    : public SimObjectParams
{
    bool arch_specific;
    unsigned index;
    std::string path;
};

} // namespace gem5

#endif // __PARAMS__QemuFwCfgItem__
