#include <stdio.h>

int main(void) {
    char first, ch;

    printf("Enter a first and last name: ");

    do {
        ch = getchar();
    } while(ch == ' ');

    first = ch; //store initial of first name.

    do {
        ch = getchar();
    } while(ch != ' ');

    while(ch != '\n') {
        ch = getchar();
        if (ch != '\n') printf("%c", ch);
    }
    printf(" %c.\n", first);

    return 0;
}