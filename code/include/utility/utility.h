#ifndef  UTILITY_UTILITY_H
#define  UTILITY_UTILITY_H

#include <climits>
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdarg.h>
#include <stdio.h>

#include "utility/win32.h"
#include "utility/time.h"
#include "utility/assert.h"

namespace ece {

  void ece_print_cmd_profile(const char* cmd_name, const timeval time_begin, const timeval time_end, const timespec tp_begin, const timespec tp_end);



  void ece_info_print(const char* format, ...);
  void ece_warning_print(const char* format, ...);
  void ece_error_print(const char* format, ...);
  void ece_debug_print(const char* format, ...);

#define ece_info ece::ece_info_print
#define ece_warning ece::ece_warning_print
#define ece_error ece::ece_error_print
#define ece_debug ece::ece_debug_print


  inline void incr_output_indent() {
    //FIXME: TODO
  }
  inline void decr_output_indent() {
    //FIXME: TODO
  }
  inline void reset_output_indent() {
    //FIXME: TODO
  }





  int getCurrentUsedMemory();


  void dump_stack();


  std::vector<std::string> SplitStringWithDelim(const std::string &s, char delim, bool removeEmptyString = true);


  bool GetFilesByExtension(const char* str, const char* ext_regex, std::vector<std::string>& file_paths);

}
#endif // ! UTILITY_UTILITY_H
