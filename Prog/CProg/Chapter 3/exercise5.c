#include <stdio.h>

int main(void)
{
    int i;
    float x, y;

    scanf("%f%d%f", &x, &i, &y);

    printf("x = %f\ni = %d\ny = %f\n", x, i, y);

    return 0;
}
/*
Input:
    12.3 45.6 789

Output:
    x = 12.300000
    i = 45
y    = 0.600000
*/