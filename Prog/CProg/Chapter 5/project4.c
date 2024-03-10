#include <stdio.h>

int main(void) {
    float knots;

    printf("Enter wind speed (in knots): ");
    scanf("%f", &knots);

    if (knots > 63) {
        printf("Hurricane.\n");
    }
    else if (knots > 47) {
        printf("Storm.\n");
    }
    else if (knots > 27) {
        printf("Gale.\n");
    }
    else if (knots > 3) {
        printf("Breeze.\n");
    }
    else if (knots > 1) {
        printf("Light air. \n");
    }
    else
        printf("Calm.\n");
    
    return 0;
}