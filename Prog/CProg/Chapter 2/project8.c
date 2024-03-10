#include <stdio.h>

int main(void)
{
    float loan, interestRate, monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestRate = (interestRate / 100.0) / 12.0;

    loan = loan - monthlyPayment + loan * interestRate;
    printf("Balance remaining after first payment: %.2f\n", loan);
    loan = loan - monthlyPayment + loan * interestRate;
    printf("Balance remaining after second payment: %.2f\n", loan);
    loan = loan - monthlyPayment + loan * interestRate;
    printf("Balance remaining after third payment: %.2f\n", loan);
    
    return 0;
}