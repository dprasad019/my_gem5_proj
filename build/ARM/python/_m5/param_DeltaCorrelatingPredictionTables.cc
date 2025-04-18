/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/DeltaCorrelatingPredictionTables.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/delta_correlating_prediction_tables.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/cache/tags/indexing_policies/base.hh"
#include "mem/cache/replacement_policies/base.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_DeltaCorrelatingPredictionTables");
    py::class_<DeltaCorrelatingPredictionTablesParams, SimObjectParams, std::unique_ptr<DeltaCorrelatingPredictionTablesParams, py::nodelete>>(m, "DeltaCorrelatingPredictionTablesParams")
        .def(py::init<>())
        .def("create", &DeltaCorrelatingPredictionTablesParams::create)
        .def_readwrite("delta_bits", &DeltaCorrelatingPredictionTablesParams::delta_bits)
        .def_readwrite("delta_mask_bits", &DeltaCorrelatingPredictionTablesParams::delta_mask_bits)
        .def_readwrite("deltas_per_entry", &DeltaCorrelatingPredictionTablesParams::deltas_per_entry)
        .def_readwrite("table_assoc", &DeltaCorrelatingPredictionTablesParams::table_assoc)
        .def_readwrite("table_entries", &DeltaCorrelatingPredictionTablesParams::table_entries)
        .def_readwrite("table_indexing_policy", &DeltaCorrelatingPredictionTablesParams::table_indexing_policy)
        .def_readwrite("table_replacement_policy", &DeltaCorrelatingPredictionTablesParams::table_replacement_policy)
        ;

    py::class_<gem5::prefetch::DeltaCorrelatingPredictionTables, gem5::SimObject, std::unique_ptr<gem5::prefetch::DeltaCorrelatingPredictionTables, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_DeltaCorrelatingPredictionTables")
        ;

}

static EmbeddedPyBind embed_obj("DeltaCorrelatingPredictionTables", module_init, "SimObject");

} // namespace gem5
namespace gem5
{

namespace
{

/*
 * If we can't define a default create() method for this params
 * struct because the SimObject doesn't have the right
 * constructor, use template magic to make it so we're actually
 * defining a create method for this class instead.
 */
class DummyDeltaCorrelatingPredictionTablesParamsClass
{
  public:
    gem5::prefetch::DeltaCorrelatingPredictionTables *create() const;
};

template <class CxxClass, class Enable=void>
class DummyDeltaCorrelatingPredictionTablesShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyDeltaCorrelatingPredictionTablesShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const DeltaCorrelatingPredictionTablesParams &>>>
{
  public:
    using Params = DeltaCorrelatingPredictionTablesParams;
    static gem5::prefetch::DeltaCorrelatingPredictionTables *
    create(const Params &p)
    {
        return new CxxClass(p);
    }
};

/*
 * This version diverts to the DummyParamsClass and a dummy
 * implementation of create if the appropriate constructor does
 * not exist.
 */
template <class CxxClass>
class DummyDeltaCorrelatingPredictionTablesShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const DeltaCorrelatingPredictionTablesParams &>>>
{
  public:
    using Params = DummyDeltaCorrelatingPredictionTablesParamsClass;
    static gem5::prefetch::DeltaCorrelatingPredictionTables *
    create(const Params &p)
    {
        return nullptr;
    }
};

} // anonymous namespace

/*
 * An implementation of either the real Params struct's create
 * method, or the Dummy one. Either an implementation is
 * mandantory since this was shunted off to the dummy class, or
 * one is optional which will override this weak version.
 */
[[maybe_unused]] gem5::prefetch::DeltaCorrelatingPredictionTables *
DummyDeltaCorrelatingPredictionTablesShunt<gem5::prefetch::DeltaCorrelatingPredictionTables>::Params::create() const
{
    return DummyDeltaCorrelatingPredictionTablesShunt<gem5::prefetch::DeltaCorrelatingPredictionTables>::create(*this);
}

} // namespace gem5
