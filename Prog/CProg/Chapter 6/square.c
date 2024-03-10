#include <stdio.h>

int main(void) {
    int i, n;
    printf("This program prints a table of squares.\nEnter number of entries on the table: ");
    scanf("%d", &n);

    i = 1;
    while (i != n+1) {
        printf("%10d%10d\n", i, i*i);
        i++;
    }

    return 0;
}