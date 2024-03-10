//Calculates a broker's commission.

#include <stdio.h>

int main(void)
{
    float commission, trade_value;

    printf("Enter value of trade: ");
    scanf("%f", &trade_value);

    if (trade_value < 2500.00f) {
        commission = 30.00f + (trade_value * 0.017f);
    }
    else if (trade_value < 6250.00f) {
        commission = 56.00f + (trade_value * 0.0066f);
    }
    else if (trade_value < 20000.00f) {
        commission = 76.00f + (trade_value * 0.0034f);
    }
    else if (trade_value < 50000.00f) {
        commission = 100.00f + (trade_value * 0.0022f);
    }
    else if (trade_value < 500000.00f) {
        commission = 155.00f + (trade_value * 0.0011f);
    }
    else
        commission = 255.00f + (trade_value * 0.0009f);

    printf("Commission: $%.2f\n", commission);

    return 0;
}