#include <stdio.h>

int main(void) {
    int n, i = 2;
    printf("Enter the value for n: ");
    scanf("%d", &n);

    while(i*i <= n) {
        printf("%d\n", i*i);
        i += 2;
    }

    return 0;
}