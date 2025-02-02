#ifndef MIPFINDER_HELPERS_H
#define MIPFINDER_HELPERS_H

#include <string>
#include <vector>
#include <thread>

namespace mipfinder {
  /* Splits a string into tokens based on the delimiter */
  std::vector<std::string> tokenise(std::string str, char delimiter);

  /* Turns the original string into all-caps */
  void toupper(std::string& str);

  /* Splits a given string at the delimiter into tokens */
  std::vector<std::string> split(const std::string& str, const char delimiter);

  /* Return the number of available processors. Defaults to 2 */
  int get_num_cpus();

}
#endif

