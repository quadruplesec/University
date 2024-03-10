#include <stdio.h>

int main(void)
{
    int digit_1, digit_2;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &digit_1, &digit_2);

    printf("The reversal is: %d%d\n", digit_2, digit_1);

    return 0;
}