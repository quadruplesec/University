#include <stdio.h>

int main(void) {
    int a, b, r, dividend, divisor;
    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);
    dividend = a;
    divisor = b;

    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("In lowest terms: %d/%d\n", dividend/a, divisor/a);

    return 0;
}