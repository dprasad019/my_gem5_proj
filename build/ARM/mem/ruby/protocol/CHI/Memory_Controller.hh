/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/durgpras/gem5/src/mem/slicc/symbols/StateMachine.py:585
 */

// Created by slicc definition of Module "Memory controller interface"

#ifndef __CHI_Memory_CONTROLLER_HH__
#define __CHI_Memory_CONTROLLER_HH__

#include <iostream>
#include <sstream>
#include <string>

#include "mem/ruby/common/Consumer.hh"
#include "mem/ruby/protocol/TransitionResult.hh"
#include "mem/ruby/protocol/CHI/Types.hh"
#include "mem/ruby/slicc_interface/AbstractController.hh"
#include "params/CHI_Memory_Controller.hh"

#include "mem/ruby/protocol/TBETable.hh"
#include "mem/ruby/protocol/TBEStorage.hh"
#include "mem/ruby/protocol/TriggerQueue.hh"
namespace gem5
{

namespace ruby
{

namespace CHI
{

extern std::stringstream Memory_transitionComment;

class Memory_Controller : public AbstractController
{
  public:
    typedef CHI_Memory_ControllerParams Params;
    Memory_Controller(const Params &p);
    void init();

    MessageBuffer *getMandatoryQueue() const;
    MessageBuffer *getMemReqQueue() const;
    MessageBuffer *getMemRespQueue() const;
    void initNetQueues();

    void print(std::ostream& out) const;
    void wakeup();
    void resetStats();
    void regStats();
    void collateStats();

    void recordCacheTrace(int cntrl, CacheRecorder* tr);
    Sequencer* getCPUSequencer() const;
    DMASequencer* getDMASequencer() const;
    GPUCoalescer* getGPUCoalescer() const;

    bool functionalReadBuffers(PacketPtr&);
    bool functionalReadBuffers(PacketPtr&, WriteMask&);
    int functionalWriteBuffers(PacketPtr&);

    void countTransition(Memory_State state, Memory_Event event);
    void possibleTransition(Memory_State state, Memory_Event event);
    uint64_t getEventCount(Memory_Event event);
    bool isPossible(Memory_State state, Memory_Event event);
    uint64_t getTransitionCount(Memory_State state, Memory_Event event);

private:
    Cycles m_response_latency;
    Cycles m_data_latency;
    Cycles m_to_memory_controller_latency;
    int m_data_channel_size;
    MessageBuffer* m_reqOut_ptr;
    MessageBuffer* m_snpOut_ptr;
    MessageBuffer* m_rspOut_ptr;
    MessageBuffer* m_datOut_ptr;
    MessageBuffer* m_reqIn_ptr;
    MessageBuffer* m_snpIn_ptr;
    MessageBuffer* m_rspIn_ptr;
    MessageBuffer* m_datIn_ptr;
    MessageBuffer* m_reqRdy_ptr;
    MessageBuffer* m_requestToMemory_ptr;
    MessageBuffer* m_responseFromMemory_ptr;
    MessageBuffer* m_triggerQueue_ptr;
    TransitionResult doTransition(Memory_Event event,
                                  Memory_TBE* m_tbe_ptr,
                                  Addr addr);

    TransitionResult doTransitionWorker(Memory_Event event,
                                        Memory_State state,
                                        Memory_State& next_state,
                                        Memory_TBE*& m_tbe_ptr,
                                        Addr addr);

    Memory_Event m_curTransitionEvent;
    Memory_State m_curTransitionNextState;

    Memory_Event curTransitionEvent() { return m_curTransitionEvent; }
    Memory_State curTransitionNextState() { return m_curTransitionNextState; }

    int m_counters[Memory_State_NUM][Memory_Event_NUM];
    int m_event_counters[Memory_Event_NUM];
    bool m_possible[Memory_State_NUM][Memory_Event_NUM];

    std::vector<statistics::Vector *> eventVec;
    std::vector<std::vector<statistics::Vector *> > transVec;

    // Internal functions
    Memory_Event reqToEvent(const CHIRequestType& param_type);
    Memory_Event respToEvent(const CHIResponseType& param_type);
    Memory_Event dataToEvent(const CHIDataType& param_type);
    Memory_State getState(Memory_TBE* param_tbe, const Addr& param_addr);
    void setState(Memory_TBE* param_tbe, const Addr& param_addr, const Memory_State& param_state);
    AccessPermission getAccessPermission(const Addr& param_addr);
    void setAccessPermission(const Addr& param_addr, const Memory_State& param_state);
    void functionalRead(const Addr& param_addr, Packet* param_pkt, WriteMask& param_mask);
    int functionalWrite(const Addr& param_addr, Packet* param_pkt);
    void printResources();

    // Set and Reset for tbe variable
    void set_tbe(Memory_TBE*& m_tbe_ptr, Memory_TBE* m_new_tbe);
    void unset_tbe(Memory_TBE*& m_tbe_ptr);

    // Actions
    /** \brief  */
    void checkAllocateTBE(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief  */
    void checkAllocateTBE_withCredit(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Allocate TBEs for a miss */
    void allocateTBE(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Initialize TBE fields */
    void initializeFromReqTBE(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Decrement pending writes */
    void decWritePending(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Deallocate TBEs */
    void deallocateTBE(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Send receipt to requestor */
    void sendReadReceipt(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Send ack to requestor */
    void sendCompDBIDResp(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Trigger sendMemoryRead */
    void triggerSendMemoryRead(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Send request to memory */
    void sendMemoryRead(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Send request to memory */
    void sendMemoryWrite(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Copies received memory data to TBE */
    void prepareSend(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Copies received net data to TBE */
    void copyWriteDataToTBE(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Send received data to requestor */
    void sendDataAndCheck(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Check if all data is received */
    void checkForReceiveCompletion(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Pop request queue. */
    void popReqInQueue(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Pop data queue. */
    void popDataInQueue(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Pop trigger queue. */
    void popTriggerQueue(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Pop memory queue. */
    void popMemoryQueue(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Stall and wait on the address */
    void stallRequestQueue(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief Wake up any requests waiting for this address */
    void wakeUpStalled(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief  */
    void sendRetryAck(Memory_TBE*& m_tbe_ptr, Addr addr);
    /** \brief  */
    void sendPCrdGrant(Memory_TBE*& m_tbe_ptr, Addr addr);

    // Objects
    int* m_blockSize_ptr;
    TBETable<Memory_TBE>* m_TBEs_ptr;
    TBEStorage* m_storTBEs_ptr;
    int* m_pendingWrites_ptr;
    TriggerQueue<Memory_RetryQueueEntry>* m_retryQueue_ptr;
};

} // namespace CHI
} // namespace ruby
} // namespace gem5

#endif // __CHI_Memory_CONTROLLER_H__
