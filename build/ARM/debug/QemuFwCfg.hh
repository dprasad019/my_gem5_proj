/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_QemuFwCfg_HH__
#define __DEBUG_QemuFwCfg_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union QemuFwCfg
{
    ~QemuFwCfg() {}
    SimpleFlag flagQemuFwCfg;

    QemuFwCfg() : flagQemuFwCfg("QemuFwCfg", "", false) {}

} instanceQemuFwCfg;
} // namespace unions

inline constexpr const auto& QemuFwCfg =
    ::gem5::debug::unions::instanceQemuFwCfg.flagQemuFwCfg;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_QemuFwCfg_HH__
