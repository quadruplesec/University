//Calculates a broker's commission.

#include <stdio.h>

int main(void)
{
    float og_commission, rival_commission, shares, share_value, trade_value;

    printf("Enter the number of shares to buy: ");
    scanf("%f", &shares);
    printf("Enter the value per share: ");
    scanf("%f", &share_value);

    trade_value = shares * share_value;

    /*Compute value of original broker's commission.*/
    if (trade_value < 2500.00f) {
        og_commission = 30.00f + (trade_value * 0.017f);
    }
    else if (trade_value < 6250.00f) {
        og_commission = 56.00f + (trade_value * 0.0066f);
    }
    else if (trade_value < 20000.00f) {
        og_commission = 76.00f + (trade_value * 0.0034f);
    }
    else if (trade_value < 50000.00f) {
        og_commission = 100.00f + (trade_value * 0.0022f);
    }
    else if (trade_value < 500000.00f) {
        og_commission = 155.00f + (trade_value * 0.0011f);
    }
    else
        og_commission = 255.00f + (trade_value * 0.0009f);

    /*Compute value of rival broker's commission.*/
    if (shares < 2000) {
        rival_commission = 33.00f + 0.03f*shares;
    }
    else 
        rival_commission = 33.00f + 0.02f*shares;

    printf("Original broker's commission: $%.2f\n", og_commission);
    printf("Rival broker's commission: $%.2f\n", rival_commission);

    return 0;
}