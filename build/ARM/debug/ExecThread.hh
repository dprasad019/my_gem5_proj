/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_ExecThread_HH__
#define __DEBUG_ExecThread_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union ExecThread
{
    ~ExecThread() {}
    SimpleFlag flagExecThread;

    ExecThread() : flagExecThread("ExecThread", "Format: Include thread ID in trace", false) {}

} instanceExecThread;
} // namespace unions

inline constexpr const auto& ExecThread =
    ::gem5::debug::unions::instanceExecThread.flagExecThread;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ExecThread_HH__
