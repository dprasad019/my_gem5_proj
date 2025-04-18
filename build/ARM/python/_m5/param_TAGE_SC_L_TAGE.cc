/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TAGE_SC_L_TAGE.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/pred/tage_sc_l.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TAGE_SC_L_TAGE");
    py::class_<TAGE_SC_L_TAGEParams, TAGEBaseParams, std::unique_ptr<TAGE_SC_L_TAGEParams, py::nodelete>>(m, "TAGE_SC_L_TAGEParams")
        .def_readwrite("firstLongTagTable", &TAGE_SC_L_TAGEParams::firstLongTagTable)
        .def_readwrite("logTagTableSize", &TAGE_SC_L_TAGEParams::logTagTableSize)
        .def_readwrite("longTagsSize", &TAGE_SC_L_TAGEParams::longTagsSize)
        .def_readwrite("longTagsTageFactor", &TAGE_SC_L_TAGEParams::longTagsTageFactor)
        .def_readwrite("shortTagsSize", &TAGE_SC_L_TAGEParams::shortTagsSize)
        .def_readwrite("shortTagsTageFactor", &TAGE_SC_L_TAGEParams::shortTagsTageFactor)
        .def_readwrite("truncatePathHist", &TAGE_SC_L_TAGEParams::truncatePathHist)
        ;

    py::class_<gem5::branch_prediction::TAGE_SC_L_TAGE, gem5::branch_prediction::TAGEBase, std::unique_ptr<gem5::branch_prediction::TAGE_SC_L_TAGE, py::nodelete>>(m, "gem5_COLONS_branch_prediction_COLONS_TAGE_SC_L_TAGE")
        ;

}

static EmbeddedPyBind embed_obj("TAGE_SC_L_TAGE", module_init, "TAGEBase");

} // namespace gem5
