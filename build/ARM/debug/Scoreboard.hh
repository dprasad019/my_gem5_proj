/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Scoreboard_HH__
#define __DEBUG_Scoreboard_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Scoreboard
{
    ~Scoreboard() {}
    SimpleFlag flagScoreboard;

    Scoreboard() : flagScoreboard("Scoreboard", "", false) {}

} instanceScoreboard;
} // namespace unions

inline constexpr const auto& Scoreboard =
    ::gem5::debug::unions::instanceScoreboard.flagScoreboard;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Scoreboard_HH__
