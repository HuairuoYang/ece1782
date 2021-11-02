message("utility---processing")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${DEST_DIR})
add_library(utility STATIC app.cpp time.cpp utility.cpp var.cpp)

