/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PioDevice.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/io_device.hh"

#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PioDevice");
    py::class_<PioDeviceParams, ClockedObjectParams, std::unique_ptr<PioDeviceParams, py::nodelete>>(m, "PioDeviceParams")
        .def_readwrite("system", &PioDeviceParams::system)
        .def_readwrite("port_pio_connection_count", &PioDeviceParams::port_pio_connection_count)
        ;

    py::class_<gem5::PioDevice, gem5::ClockedObject, std::unique_ptr<gem5::PioDevice, py::nodelete>>(m, "gem5_COLONS_PioDevice")
        ;

}

static EmbeddedPyBind embed_obj("PioDevice", module_init, "ClockedObject");

} // namespace gem5
