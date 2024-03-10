#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;
    printf("Input the value for the box's height: ");
    scanf("%d", &height);
    printf("Input the value for the box's length: ");
    scanf("%d", &length);
    printf("Input the value for the box's width: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic centimeters): %d\n", volume);
    printf("Dimensional weight (kilograms): %d\n", weight);

    return 0;
}