/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Faults_HH__
#define __DEBUG_Faults_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Faults
{
    ~Faults() {}
    SimpleFlag flagFaults;

    Faults() : flagFaults("Faults", "Information about faults, exceptions, interrupts, etc", false) {}

} instanceFaults;
} // namespace unions

inline constexpr const auto& Faults =
    ::gem5::debug::unions::instanceFaults.flagFaults;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Faults_HH__
