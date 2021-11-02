#include <tcl.h>

#include "tcl/commands.h"

namespace ece {

  extern int Source(ClientData data, Tcl_Interp* interp, int objc, Tcl_Obj* const objv[]);
  Commands gCommands;

  int registerAllCmds(Tcl_Interp* interp) {
    Commands::set_interp(interp);

    gCommands.register_cmd(interp, "source", "file_name", Source);

    return TCL_OK;
  }
}