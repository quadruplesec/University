#include <iostream>

bool pangram(const char s[], char m[]) {
    int alpha[26] = {0};
    int i = 0, m_counter = 0;
    bool is_pangram = true;
    
    while (s[i] != '\0') {
        char c = s[i++];

        if (c == ' ')
            continue;

        if (c < 'a')
            c += 32;

        alpha[c - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 0) {
            is_pangram = false;
            m[m_counter++] = 'a' + i;
        }
    }

    m[m_counter] = 0;
    return is_pangram; 
}

