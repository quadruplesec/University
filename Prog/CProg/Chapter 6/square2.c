#include <stdio.h>

int main(void) {
    int i, n;
    printf("This program prints a table of squares.\nEnter number of entries on the table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i*i);
    }

    return 0;
}