/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/TimingExprOp.hh"

namespace gem5
{

namespace enums
{
    const char *TimingExprOpStrings[Num_TimingExprOp] =
    {
        "timingExprAdd",
        "timingExprSub",
        "timingExprUMul",
        "timingExprUDiv",
        "timingExprSMul",
        "timingExprSDiv",
        "timingExprUCeilDiv",
        "timingExprEqual",
        "timingExprNotEqual",
        "timingExprULessThan",
        "timingExprUGreaterThan",
        "timingExprSLessThan",
        "timingExprSGreaterThan",
        "timingExprInvert",
        "timingExprNot",
        "timingExprAnd",
        "timingExprOr",
        "timingExprSizeInBits",
        "timingExprSignExtend32To64",
        "timingExprAbs",
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
    py::module_ m = m_internal.def_submodule("enum_TimingExprOp");

py::enum_<enums::TimingExprOp>(m, "enum_TimingExprOp")
        .value("timingExprAdd", enums::timingExprAdd)
        .value("timingExprSub", enums::timingExprSub)
        .value("timingExprUMul", enums::timingExprUMul)
        .value("timingExprUDiv", enums::timingExprUDiv)
        .value("timingExprSMul", enums::timingExprSMul)
        .value("timingExprSDiv", enums::timingExprSDiv)
        .value("timingExprUCeilDiv", enums::timingExprUCeilDiv)
        .value("timingExprEqual", enums::timingExprEqual)
        .value("timingExprNotEqual", enums::timingExprNotEqual)
        .value("timingExprULessThan", enums::timingExprULessThan)
        .value("timingExprUGreaterThan", enums::timingExprUGreaterThan)
        .value("timingExprSLessThan", enums::timingExprSLessThan)
        .value("timingExprSGreaterThan", enums::timingExprSGreaterThan)
        .value("timingExprInvert", enums::timingExprInvert)
        .value("timingExprNot", enums::timingExprNot)
        .value("timingExprAnd", enums::timingExprAnd)
        .value("timingExprOr", enums::timingExprOr)
        .value("timingExprSizeInBits", enums::timingExprSizeInBits)
        .value("timingExprSignExtend32To64", enums::timingExprSignExtend32To64)
        .value("timingExprAbs", enums::timingExprAbs)
        .value("Num_TimingExprOp", enums::Num_TimingExprOp)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_TimingExprOp", module_init);

} // namespace gem5
    
