/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_RVCTRL_HH__
#define __DEBUG_RVCTRL_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union RVCTRL
{
    ~RVCTRL() {}
    SimpleFlag flagRVCTRL;

    RVCTRL() : flagRVCTRL("RVCTRL", "", false) {}

} instanceRVCTRL;
} // namespace unions

inline constexpr const auto& RVCTRL =
    ::gem5::debug::unions::instanceRVCTRL.flagRVCTRL;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RVCTRL_HH__
