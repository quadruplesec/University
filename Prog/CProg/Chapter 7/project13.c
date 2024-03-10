#include <stdio.h>

int main(void) {
    float sum, total, avg;
    int i;
    char ch;

    printf("Enter a sentence: ");

    while(ch != '\n') {
        ch = getchar();
        if (ch != ' ' && ch != '.') ++i;
        else {
            if (ch == '.') ++i; // The problem specified that period must be included as part of the word its attached to, not sure why.
            ++total;
            sum += i;
            i = 0;
        }
    }
    avg = sum / total;
    printf("Average word length: %.1f", avg);

    return 0;
}