/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Sp805_HH__
#define __DEBUG_Sp805_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Sp805
{
    ~Sp805() {}
    SimpleFlag flagSp805;

    Sp805() : flagSp805("Sp805", "", false) {}

} instanceSp805;
} // namespace unions

inline constexpr const auto& Sp805 =
    ::gem5::debug::unions::instanceSp805.flagSp805;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Sp805_HH__
