/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_SMMUv3_HH__
#define __DEBUG_SMMUv3_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union SMMUv3
{
    ~SMMUv3() {}
    SimpleFlag flagSMMUv3;

    SMMUv3() : flagSMMUv3("SMMUv3", "", false) {}

} instanceSMMUv3;
} // namespace unions

inline constexpr const auto& SMMUv3 =
    ::gem5::debug::unions::instanceSMMUv3.flagSMMUv3;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_SMMUv3_HH__
