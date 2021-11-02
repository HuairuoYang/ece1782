#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>

#include "utility/app.h"
#include "tcl/commands.h"
#include "utility/utility.h"
#include "utility/var.h"
#include "utility/exception.h"

namespace ece {
    int Source(ClientData /*data*/, Tcl_Interp* interp, int objc, Tcl_Obj* const objv[]) {
    if (objc < 2) {
      ece_error("*ERROR*: No file was specified to source. Specify the file name and rerun.\n");
      return TCL_ERROR;
    }
    char* file_name = Tcl_GetString(objv[1]);
    struct timespec tp_begin, tp_end;
    timeval time_begin, time_end;
    DataVar::time_.getProcessCpuTime(&tp_begin);
    DataVar::time_.getElapsedTime(&time_begin);
    Tcl_EvalFile(interp, file_name);
    DataVar::time_.getProcessCpuTime(&tp_end);
    DataVar::time_.getElapsedTime(&time_end);
    std::string cmd_name = "source ";
    cmd_name += file_name;
    ece_print_cmd_profile(cmd_name.c_str(), time_begin, time_end, tp_begin, tp_end);
    return TCL_OK;
  }
}