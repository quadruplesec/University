#include <stdio.h>

int main(void)
{
    float x;
    printf("Input the value for x: ");
    scanf("%f", &x);

    printf("Exponential notation; left-justified in a field of size 8; one digit after decimal point:%-8.1e\n",x);
    printf("Exponential notation; right-justified in a field of size 10; six digits after the decimal point:%10.6e\n", x);
    printf("Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point:%-8.3f\n", x);
    printf("Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point:%6.0f\n", x);

    return 0;
}
