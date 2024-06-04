#include <vector>
#include <string>
#include "print_string.h"

void split(const string& s, vector<string>& v) {
    if (s.length() == 0) return;
    if (s.find(' ', 0) == std::string::npos) {
        v.push_back(s);
        return;
    }

    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
            continue;
        size_t pos = s.find(' ', i);
        if (pos == std::string::npos) {
            v.push_back(s.substr(i, s.length()));
            break;
        }

        v.push_back(s.substr(i, pos - i));
        i = pos;
    }
}