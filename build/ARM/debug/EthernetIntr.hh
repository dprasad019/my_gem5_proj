/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_EthernetIntr_HH__
#define __DEBUG_EthernetIntr_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union EthernetIntr
{
    ~EthernetIntr() {}
    SimpleFlag flagEthernetIntr;

    EthernetIntr() : flagEthernetIntr("EthernetIntr", "", false) {}

} instanceEthernetIntr;
} // namespace unions

inline constexpr const auto& EthernetIntr =
    ::gem5::debug::unions::instanceEthernetIntr.flagEthernetIntr;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_EthernetIntr_HH__
