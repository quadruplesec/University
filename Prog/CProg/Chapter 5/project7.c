#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    largest = num1;
    smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }
    else if (num2 > largest) {
       largest = num2; 
    }

    if (num3 < smallest) {
        smallest = num3;
    }
    else if (num3 > largest) {
       largest = num3; 
    }

    if (num4 < smallest) {
        smallest = num4;
    }
    else if (num4 > largest) {
       largest = num4; 
    }
    
    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    
    return 0;
}