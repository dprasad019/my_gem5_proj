/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TaggedIndexingPolicy.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/tagged_entry.hh"

#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TaggedIndexingPolicy");
    py::class_<TaggedIndexingPolicyParams, SimObjectParams, std::unique_ptr<TaggedIndexingPolicyParams, py::nodelete>>(m, "TaggedIndexingPolicyParams")
        .def_readwrite("assoc", &TaggedIndexingPolicyParams::assoc)
        ;

    py::class_<gem5::IndexingPolicyTemplate<gem5::TaggedTypes>, gem5::SimObject, std::unique_ptr<gem5::IndexingPolicyTemplate<gem5::TaggedTypes>, py::nodelete>>(m, "gem5_COLONS_IndexingPolicyTemplate<gem5_COLONS_TaggedTypes>")
        ;

}

static EmbeddedPyBind embed_obj("TaggedIndexingPolicy", module_init, "SimObject");

} // namespace gem5
