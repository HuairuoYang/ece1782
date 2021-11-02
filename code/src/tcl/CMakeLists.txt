message("tcl---processing")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${DEST_DIR})
add_library(tcl STATIC commands.cpp register_commands.cpp tcl_init.cpp)
