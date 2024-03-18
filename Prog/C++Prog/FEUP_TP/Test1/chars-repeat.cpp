#include <iostream>
using namespace std;

char* chars_repeat(const char str[], int min_repeat) {
    int new_len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (i < min_repeat) {
            new_len += min_repeat;
            continue;
        }
        new_len += i;
    }


    char *ret_str = new char[new_len + 1];
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int repetitions = 0;
        if (i < min_repeat) {
            repetitions = min_repeat;
            
        }
        else {
            repetitions = i;
        }

        while (repetitions) {
            ret_str[index++] = str[i];
            repetitions--;
        }
    }

    ret_str[index] = 0;

    return ret_str;
}
