/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/durgpras/gem5/src/mem/slicc/symbols/Type.py:585
 */

#ifndef __CHI_Memory_TriggerMsg_HH__
#define __CHI_Memory_TriggerMsg_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"

#include "mem/ruby/protocol/CHI/Memory_Event.hh"
#include "mem/ruby/protocol/MachineID.hh"
#include "mem/ruby/protocol/Message.hh"
namespace gem5
{

namespace ruby
{

class RubySystem;

namespace CHI
{

class Memory_TriggerMsg :  public Message
{
  public:
Memory_TriggerMsg(Tick curTime, int blockSize, RubySystem* rs) : Message(curTime, blockSize, rs)
{
        setRubySystem(rs);
        // m_addr has no default
        m_event = Memory_Event_NUM;
         // default value of Memory_Event
        // m_retryDest has no default
    }
    Memory_TriggerMsg(const Memory_TriggerMsg&) = default;
    Memory_TriggerMsg
    &operator=(const Memory_TriggerMsg&) = default;
    Memory_TriggerMsg(const Tick curTime, const int blockSize, const RubySystem *rs, const Addr& local_addr, const Memory_Event& local_event, const MachineID& local_retryDest)
        : Message(curTime, blockSize, rs)
    {
        m_addr = local_addr;
        m_event = local_event;
        m_retryDest = local_retryDest;
    }
    MsgPtr
    clone() const
    {
         return std::shared_ptr<Message>(new Memory_TriggerMsg(*this));
    }
    void initBlockSize(int block_size)
    {
    	block_size_bits = floorLog2(block_size);
    }
    void setRubySystem(RubySystem *ruby_system)
    {
    }
    // Const accessors methods for each field
    /** \brief Const accessor method for addr field.
     *  \return addr field
     */
    const Addr&
    getaddr() const
    {
        return m_addr;
    }
    /** \brief Const accessor method for event field.
     *  \return event field
     */
    const Memory_Event&
    getevent() const
    {
        return m_event;
    }
    /** \brief Const accessor method for retryDest field.
     *  \return retryDest field
     */
    const MachineID&
    getretryDest() const
    {
        return m_retryDest;
    }
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for addr field.
     *  \return addr field
     */
    Addr&
    getaddr()
    {
        return m_addr;
    }
    /** \brief Non-const accessor method for event field.
     *  \return event field
     */
    Memory_Event&
    getevent()
    {
        return m_event;
    }
    /** \brief Non-const accessor method for retryDest field.
     *  \return retryDest field
     */
    MachineID&
    getretryDest()
    {
        return m_retryDest;
    }
    // Mutator methods for each field
    /** \brief Mutator method for addr field */
    void
    setaddr(const Addr& local_addr)
    {
        m_addr = local_addr;
    }
    /** \brief Mutator method for event field */
    void
    setevent(const Memory_Event& local_event)
    {
        m_event = local_event;
    }
    /** \brief Mutator method for retryDest field */
    void
    setretryDest(const MachineID& local_retryDest)
    {
        m_retryDest = local_retryDest;
    }
    void print(std::ostream& out) const;
  //private:
    int block_size_bits = 0;
    Addr m_addr;
    Memory_Event m_event;
    MachineID m_retryDest;
    bool functionalRead(Packet* param_pkt);
    bool functionalRead(Packet* param_pkt, WriteMask& param_mask);
    bool functionalWrite(Packet* param_pkt);
};
inline ::std::ostream&
operator<<(::std::ostream& out, const Memory_TriggerMsg& obj)
{
    obj.print(out);
    out << ::std::flush;
    return out;
}

} // namespace CHI
} // namespace ruby
} // namespace gem5

#endif // __CHI_Memory_TriggerMsg_HH__
