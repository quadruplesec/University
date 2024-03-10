#include <stdio.h>

int main(void) {
    int a, b, r;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }  
    printf("Greatest common divisor: %d\n", a);

    return 0;
}