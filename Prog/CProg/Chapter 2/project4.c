#include <stdio.h>
#define TAX 1.05f

int main(void)
{
    float inputDollars, outputDollars;
    printf("Input the amount of dollars: ");
    scanf("%f", &inputDollars);
    outputDollars = inputDollars * TAX;
    printf("Value after tax: %.2f\n", outputDollars);

    return 0;
}