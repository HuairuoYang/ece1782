message("main---processing")


#link_directories(AFTER $<IF:$<CONFIG:Debug>,${DEST_DIR}/Debug,${DEST_DIR}/Release>)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(ece1782 main.cpp)


set_property(TARGET ece1782 PROPERTY LINK_DIRECTORIES $<IF:$<CONFIG:Debug>,${DEST_DIR}/Debug,${DEST_DIR}/Release>)


set_property(TARGET ece1782 PROPERTY RUNTIME_OUTPUT_NAME $<IF:$<CONFIG:Debug>,ece1782-debug,ece1782>)

target_link_libraries(ece1782 ${TOP_INCLUDE_PATH}/tcl/lib/tcl84.lib)
target_link_libraries(ece1782 ${TOP_INCLUDE_PATH}/libxml2/lib/libxml2.lib)
target_link_libraries(ece1782 ${TOP_INCLUDE_PATH}/pthread/lib/pthreadVC2.lib)
target_link_libraries(ece1782 ${TOP_INCLUDE_PATH}/zlib/lib/zdll.lib)
#target_link_libraries(exe1782 db.lib io.lib parser.lib tcl.lib utility.lib)
target_link_libraries(ece1782 io.lib tcl.lib utility.lib)

set(CMAKE_EXE_LINKER_FLAGS "psapi.lib ${CMAKE_EXE_LINKER_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "/SAFESEH:NO ${CMAKE_EXE_LINKER_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "/NODEFAULTLIB:libc.lib /NODEFAULTLIB:libcmt.lib /NODEFAULTLIB:libcd.lib /NODEFAULTLIB:libcmtd.lib ${CMAKE_EXE_LINKER_FLAGS}")
