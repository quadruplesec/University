#include <stdio.h>

int main(void)
{
    int bills20, bills10, bills5, bills1, amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bills20 = amount / 20;
    amount = amount - 20 * bills20;

    bills10 = amount / 10;
    amount = amount - 10 * bills10;

    bills5 = amount / 5;
    amount = amount - 5 * bills5;

    bills1 = amount;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", bills20, bills10, bills5, bills1);
    
    return 0;
}