/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_NoMali_HH__
#define __DEBUG_NoMali_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union NoMali
{
    ~NoMali() {}
    SimpleFlag flagNoMali;

    NoMali() : flagNoMali("NoMali", "", false) {}

} instanceNoMali;
} // namespace unions

inline constexpr const auto& NoMali =
    ::gem5::debug::unions::instanceNoMali.flagNoMali;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_NoMali_HH__
