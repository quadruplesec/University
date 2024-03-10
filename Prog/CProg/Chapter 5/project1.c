#include <stdio.h>

int main(void) {
    
    int num, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100) {
        digits = 3;
    }
    else if (num >= 10) {
        digits = 2;
    }
    else {
        digits = 1;
    }

    printf("The number %d has %d digits.\n", num, digits);

    return 0;
}