#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
#include <stdio.h>

int main(void){
    float celsius, fahrenheit;

    printf("Input temperature in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = SCALE_FACTOR * (fahrenheit - FREEZING_PT);
    printf("The input value, converted to Celsius, is %.1f\n", celsius);

    return 0;
}