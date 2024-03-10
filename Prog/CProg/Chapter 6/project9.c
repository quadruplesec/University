#include <stdio.h>

int main(void) {
    float loan, interestRate, monthlyPayment;
    int n, i;

    printf("Enter number of payments: ");
    scanf("%d", &n);
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestRate = (interestRate / 100.0) / 12.0;

    i = 1;
    while(i <= n) {
        loan = loan - monthlyPayment + loan * interestRate;
        printf("Balance remaining after payment #%d: $%.2f\n", i++, loan);
    }
    
    return 0;
}