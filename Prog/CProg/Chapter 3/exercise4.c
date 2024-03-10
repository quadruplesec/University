#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);

    printf("i = %d\nj = %d\nx = %f\n", i, j, x);

    return 0;
}
/*
Input:
    10.3 5 6

Output:
    i = 10
    j = 5
    x = 0.300000
*/