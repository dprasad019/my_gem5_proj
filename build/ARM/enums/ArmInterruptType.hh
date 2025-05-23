/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_hh.py:123
 */

#ifndef __ENUM__None__ArmInterruptType__
#define __ENUM__None__ArmInterruptType__

namespace gem5
{
enum class ArmInterruptType
{
    IRQ_TYPE_EDGE_FALLING = 2,
    IRQ_TYPE_EDGE_RISING = 1,
    IRQ_TYPE_LEVEL_HIGH = 4,
    IRQ_TYPE_LEVEL_LOW = 8,
    Num_ArmInterruptType = 4
};
extern const char *ArmInterruptTypeStrings[static_cast<int>(ArmInterruptType::Num_ArmInterruptType)];

} // namespace gem5

#endif // __ENUM__None__ArmInterruptType__
