#include <stdio.h>

int main(void) {
    int num, rev_num = 0;
    printf("Input an integer to be reversed: ");
    scanf("%d", &num);

    do {
        rev_num *= 10;
        rev_num += num % 10;
        num /= 10;
    } while(num > 0);

    printf("Reversed number: %d\n", rev_num);

    return 0;
}