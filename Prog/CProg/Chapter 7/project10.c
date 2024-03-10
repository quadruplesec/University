#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int i = 0;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n') {
        switch(toupper(ch)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                ++i; break;
        }
    }
    printf("Your sentence contains %d vowels.\n", i);

    return 0;
}