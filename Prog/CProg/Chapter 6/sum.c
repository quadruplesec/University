#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("This program sums a series of integers\nEnter interegers (0 to terminate the sum): ");
    scanf("%d", &n);

    while (n) {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d\n", sum);

    return 0;
}