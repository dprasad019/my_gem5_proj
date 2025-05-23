/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ArmSEWorkload.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/arm/se_workload.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ArmSEWorkload");
    py::class_<ArmSEWorkloadParams, SEWorkloadParams, std::unique_ptr<ArmSEWorkloadParams, py::nodelete>>(m, "ArmSEWorkloadParams")
        ;

    py::class_<gem5::ArmISA::SEWorkload, gem5::SEWorkload, std::unique_ptr<gem5::ArmISA::SEWorkload, py::nodelete>>(m, "gem5_COLONS_ArmISA_COLONS_SEWorkload")
        ;

}

static EmbeddedPyBind embed_obj("ArmSEWorkload", module_init, "SEWorkload");

} // namespace gem5
