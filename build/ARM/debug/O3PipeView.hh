/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_O3PipeView_HH__
#define __DEBUG_O3PipeView_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union O3PipeView
{
    ~O3PipeView() {}
    SimpleFlag flagO3PipeView;

    O3PipeView() : flagO3PipeView("O3PipeView", "", false) {}

} instanceO3PipeView;
} // namespace unions

inline constexpr const auto& O3PipeView =
    ::gem5::debug::unions::instanceO3PipeView.flagO3PipeView;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_O3PipeView_HH__
