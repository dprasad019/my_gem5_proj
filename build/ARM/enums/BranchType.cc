/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/BranchType.hh"

namespace gem5
{

namespace enums
{
    const char *BranchTypeStrings[Num_BranchType] =
    {
        "NoBranch",
        "Return",
        "CallDirect",
        "CallIndirect",
        "DirectCond",
        "DirectUncond",
        "IndirectCond",
        "IndirectUncond",
    };
} // namespace enums
} // namespace gem5
#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <sim/init.hh>

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
    py::module_ m = m_internal.def_submodule("enum_BranchType");

py::enum_<enums::BranchType>(m, "enum_BranchType")
        .value("NoBranch", enums::NoBranch)
        .value("Return", enums::Return)
        .value("CallDirect", enums::CallDirect)
        .value("CallIndirect", enums::CallIndirect)
        .value("DirectCond", enums::DirectCond)
        .value("DirectUncond", enums::DirectUncond)
        .value("IndirectCond", enums::IndirectCond)
        .value("IndirectUncond", enums::IndirectUncond)
        .value("Num_BranchType", enums::Num_BranchType)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_BranchType", module_init);

} // namespace gem5
    
