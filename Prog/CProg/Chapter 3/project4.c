#include <stdio.h>

int main(void)
{
    int pt1, pt2, pt3;

    printf("Enter phone number [(xxx xxx-xxxx)]: ");
    scanf("(%d) %d-%d", &pt1, &pt2, &pt3);

    printf("You entered: %d.%d.%d\n", pt1, pt2, pt3);

    return 0;
}