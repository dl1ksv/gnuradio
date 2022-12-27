/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(pll_freqdet_cf.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(1d03d14ad56b45f6f1460711ba66ea67)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/analog/pll_freqdet_cf.h>
// pydoc.h is automatically generated in the build directory
#include <pll_freqdet_cf_pydoc.h>

void bind_pll_freqdet_cf(py::module& m)
{

    using pll_freqdet_cf = ::gr::analog::pll_freqdet_cf;


    py::class_<pll_freqdet_cf,
               gr::blocks::control_loop,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<pll_freqdet_cf>>(m, "pll_freqdet_cf", D(pll_freqdet_cf))

        .def(py::init(&pll_freqdet_cf::make),
             py::arg("loop_bw"),
             py::arg("max_freq"),
             py::arg("min_freq"),
             D(pll_freqdet_cf, make))


        ;
}