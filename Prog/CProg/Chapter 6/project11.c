#include <stdio.h>

int main(void) {
    int n, i;
    double euler, factorial;
    printf("Enter a positive ingeter greater than 0: ");
    scanf("%d", &n);
    euler = 1; // to account for 1/0!... too lazy to do it the right way :P

    for(n; n >= 1; n--) {
        for(i = n, factorial = 1.0f; i >= 1; i--) {
            factorial *= i;
        }
        euler += 1.0f/factorial;
    }

    printf("Approximation of e = %f\n", euler);

    return 0;
}