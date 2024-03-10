#include <iostream>

char* repeat(const char str[], int n) {
    if (str[0] == 0) {
        char *return_str = new char[1];
        return_str[0] = 0;
        return return_str;
    }

    int i = 0, len = 0;
    while (str[i]) {
        ++len; ++i;
    }

    char *ret_str = new char[len*n + 1];
    int index = 0;

    while (n) {
        for (int i = 0; i < len; i++) {
            ret_str[index++] = str[i];
        }
        --n;
    }

    ret_str[index] = 0;

    return ret_str;
}

