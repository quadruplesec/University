#include <stdio.h>
#define PI 3.14159f

int main(void)
{
    float volume, radius;
    printf("Input the radius of the sphere: ");
    scanf("%f", &radius);
    volume = (4.0f/3.0f) * PI * (radius * radius * radius);
    printf("The radius of the sphere is: %.2f meters.\n", volume);
    return 0;
}
