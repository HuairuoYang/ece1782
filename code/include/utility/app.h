#ifndef UTILITY_APP_H
#define UTILITY_APP_H

#include <string>

namespace ece {
  class App {
  public:
    static bool canonicalFilePath(std::string &file_path, std::string &canonical_path);
    static std::string getDBPath();
    static bool avoidOverwrite(const std::string & file_name);
  };
}

#endif // !UTILITY_APP_H
