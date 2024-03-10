#include <stdio.h>

int main(void)
{
    int input_num, i1, i2, i3, i4, i5;
    i1 = i2 = i3 = i4 = i5 = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input_num);

    i1 = input_num % 8;
    input_num /= 8;
    i2 = input_num % 8;
    input_num /= 8;
    i3 = input_num % 8;
    input_num /= 8;
    i4 = input_num % 8;
    input_num /= 8;
    i5 = input_num % 8;
    input_num /= 8;
    
    printf("In octal, your number is: %d%d%d%d%d\n", i5, i4, i3, i2, i1);
    
    return 0;
}