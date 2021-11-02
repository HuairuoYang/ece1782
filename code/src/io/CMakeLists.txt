message("io---processing")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${DEST_DIR})
add_library(io STATIC io_tcl.cpp)

