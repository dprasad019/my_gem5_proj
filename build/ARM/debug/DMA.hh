/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_DMA_HH__
#define __DEBUG_DMA_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union DMA
{
    ~DMA() {}
    SimpleFlag flagDMA;

    DMA() : flagDMA("DMA", "", false) {}

} instanceDMA;
} // namespace unions

inline constexpr const auto& DMA =
    ::gem5::debug::unions::instanceDMA.flagDMA;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DMA_HH__
