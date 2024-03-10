#include <stdio.h>

int main(void) {
    float largest, n;

    printf("Enter a number: ");
    scanf("%f", &n);
    largest = n;

    while(n > 0){
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n > largest) {
            largest = n;
        }
    }
    printf("The largest number entered was %g", largest);
    return 0;
}