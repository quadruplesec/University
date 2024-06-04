#include <iostream>
#include <string>
#include <cctype>

bool pangram(const std::string& s, std::string& m) {
     int alpha[26]{0};
    for (size_t i = 0; i < s.length(); i++) {
        char c = std::tolower(s[i]);
        if (!(c <= 'z' && c >= 'a'))
            continue;
        alpha[c - 'a'] = 1;
    }
    
    bool is_pangram = true;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 0) {
            is_pangram = false;
            m += 'a' + i;
        }
    }

    return is_pangram;
}