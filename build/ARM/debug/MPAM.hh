/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_MPAM_HH__
#define __DEBUG_MPAM_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union MPAM
{
    ~MPAM() {}
    SimpleFlag flagMPAM;

    MPAM() : flagMPAM("MPAM", "MPAM debug flag", false) {}

} instanceMPAM;
} // namespace unions

inline constexpr const auto& MPAM =
    ::gem5::debug::unions::instanceMPAM.flagMPAM;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_MPAM_HH__
