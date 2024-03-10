#include <stdio.h>

int main(void) {
    int n, num_digits = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    do {
        num_digits += 1;
        n = n / 10;
    } while (n);

    printf("Number od digits: %d\n", num_digits);

    return 0;
}