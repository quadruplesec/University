#include <string>
bool solution(std::string const &str, std::string const &ending) {
  int len1 = str.length();
  int len2 = ending.length();

  for (int i = len1 - len2, n = 0; i < len1; i++, n++) {
    if (str[i] != ending[n]) return false;
  }
  return true;
}

