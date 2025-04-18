/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/ImageFormat.hh"

namespace gem5
{

namespace enums
{
    const char *ImageFormatStrings[Num_ImageFormat] =
    {
        "Auto",
        "Bitmap",
        "Png",
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
    py::module_ m = m_internal.def_submodule("enum_ImageFormat");

py::enum_<enums::ImageFormat>(m, "enum_ImageFormat")
        .value("Auto", enums::Auto)
        .value("Bitmap", enums::Bitmap)
        .value("Png", enums::Png)
        .value("Num_ImageFormat", enums::Num_ImageFormat)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_ImageFormat", module_init);

} // namespace gem5
    
