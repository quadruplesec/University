/* Approximats the square root of a number using Newton's method*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y = 1.0f, avg, sqrt, prev_y;
    
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for(;;) {
        prev_y = y;
        avg = x / y;
        y = (y + avg) / 2.0f;

        if (fabs(y-prev_y) < (y * 0.00001f)) {
            sqrt = y;
            break;
        }
    }

    printf("Square root: %f\n", sqrt);

    return 0;
}


