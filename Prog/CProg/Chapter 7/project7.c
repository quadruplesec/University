#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, result_num, result_denom;
    char ch;

    printf("Enter the first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter the second fraction: ");
    scanf("%d / %d", &num2, &denom2);

    printf("Enter the operation to perform (Add = +; Sub = -; Mul = *; Div = /): ");
    while((ch = getchar()) == '\n')
        ;
        
    switch(ch) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("result_num = %d\nresult_denom = %d\n", result_num, result_denom);
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            printf("result_num = %d\nresult_denom = %d\n", result_num, result_denom);
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("result_num = %d\nresult_denom = %d\n", result_num, result_denom);
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            printf("result_num = %d\nresult_denom = %d\n", result_num, result_denom);
            break;
    }

    printf("The result is %d/%d\n", result_num, result_denom);
    
    return 0;
}