/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_MemTest_HH__
#define __DEBUG_MemTest_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union MemTest
{
    ~MemTest() {}
    SimpleFlag flagMemTest;

    MemTest() : flagMemTest("MemTest", "", false) {}

} instanceMemTest;
} // namespace unions

inline constexpr const auto& MemTest =
    ::gem5::debug::unions::instanceMemTest.flagMemTest;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_MemTest_HH__
