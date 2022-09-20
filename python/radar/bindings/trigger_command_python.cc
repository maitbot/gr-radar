/*
 * Copyright 2022 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(trigger_command.h)                                         */
/* BINDTOOL_HEADER_FILE_HASH(c8626e3e3c68934129a0b5e859f0854c)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <radar/trigger_command.h>
// pydoc.h is automatically generated in the build directory
#include <trigger_command_pydoc.h>

void bind_trigger_command(py::module& m)
{

    using trigger_command = ::gr::radar::trigger_command;


    py::class_<trigger_command,
               gr::block,
               gr::basic_block,
               std::shared_ptr<trigger_command>>(m, "trigger_command", D(trigger_command))

        .def(py::init(&trigger_command::make),
             py::arg("command"),
             py::arg("identifiers"),
             py::arg("vals_min"),
             py::arg("vals_max"),
             py::arg("block_time"),
             D(trigger_command, make))


        ;
}
