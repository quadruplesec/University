#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic centimeters): %d\n", volume);
    printf("Dimensional weight (kilograms): %d\n", (volume + 165) / 166);

    return 0;
}
