/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_MC146818_HH__
#define __DEBUG_MC146818_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union MC146818
{
    ~MC146818() {}
    SimpleFlag flagMC146818;

    MC146818() : flagMC146818("MC146818", "", false) {}

} instanceMC146818;
} // namespace unions

inline constexpr const auto& MC146818 =
    ::gem5::debug::unions::instanceMC146818.flagMC146818;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_MC146818_HH__
