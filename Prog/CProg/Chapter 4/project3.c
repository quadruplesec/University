#include <stdio.h>

int main(void)
{
    int input_num;
    printf("Enter a three-digit number: ");
    scanf("%d", &input_num);

    printf("The reversal is: %d\n", (input_num / 100) + ((input_num%100) / 10 * 10) +  ((input_num%100)%10) * 100);

    return 0;
}