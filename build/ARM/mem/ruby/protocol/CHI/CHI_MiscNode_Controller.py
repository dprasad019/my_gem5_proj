#
# DO NOT EDIT THIS FILE!
# File automatically generated by
#   /home/durgpras/gem5/src/mem/slicc/symbols/StateMachine.py:330
#

from m5.params import *
from m5.SimObject import SimObject
from m5.objects.Controller import RubyController

class CHI_MiscNode_Controller(RubyController):
    type = 'CHI_MiscNode_Controller'
    cxx_header = 'mem/ruby/protocol/CHI/MiscNode_Controller.hh'
    cxx_class = 'gem5::ruby::CHI::MiscNode_Controller'
    snp_latency = Param.Cycles((0), "")
    snp_inv_latency = Param.Cycles((0), "")
    allocation_latency = Param.Cycles((0), "")
    request_latency = Param.Cycles((1), "")
    response_latency = Param.Cycles((1), "")
    sched_response_latency = Param.Cycles((1), "")
    snoop_latency = Param.Cycles((1), "")
    data_latency = Param.Cycles((1), "")
    stall_recycle_lat = Param.Cycles((1), "")
    number_of_DVM_TBEs = Param.Int("")
    number_of_non_sync_TBEs = Param.Int("")
    dealloc_wait_for_tag = Param.Bool(("False"), "")
    data_channel_size = Param.Int("")
    early_nonsync_comp = Param.Bool("")
    comp_wu_latency = Param.Cycles((0), "")
    retry_ack_latency = Param.Cycles((0), "")
    crd_grant_latency = Param.Cycles((0), "")
    retry_req_latency = Param.Cycles((0), "")
    throttle_req_on_retry = Param.Bool(("True"), "")
    reqOut = Param.MessageBuffer("")
    snpOut = Param.MessageBuffer("")
    rspOut = Param.MessageBuffer("")
    datOut = Param.MessageBuffer("")
    reqIn = Param.MessageBuffer("")
    snpIn = Param.MessageBuffer("")
    rspIn = Param.MessageBuffer("")
    datIn = Param.MessageBuffer("")
    mandatoryQueue = Param.MessageBuffer("")
    triggerQueue = Param.MessageBuffer("")
    retryTriggerQueue = Param.MessageBuffer("")
    schedRspTriggerQueue = Param.MessageBuffer("")
    reqRdy = Param.MessageBuffer("")
    snpRdy = Param.MessageBuffer("")

from m5.defines import buildEnv
from m5.util import warn

if buildEnv["PROTOCOL"] == "CHI":
    class MiscNode_Controller(CHI_MiscNode_Controller):
        def __init__(self, *args, **kwargs):
            warn(
                "MiscNode_Controller is deprecated. Use %s_MiscNode_Controller instead",
                buildEnv['PROTOCOL']
            )
            super().__init__(*args, **kwargs)
