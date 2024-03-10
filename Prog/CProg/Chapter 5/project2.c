#include <stdio.h>

int main(void){

    int hours, minutes, pm_flag;
    pm_flag = 0;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hours, &minutes);

    if (hours > 12) {
        hours = hours - 12;
        pm_flag = 1;
        }
    else if (hours == 12){
        pm_flag = 1;
    }
    else if (hours == 0) {
        hours = 12;
    }

    printf("Equivalent 12-hour time: %d:%.2d ", hours, minutes);
    if (pm_flag){
        printf("PM\n");
    }
    else {
        printf("AM\n");
    }

    return 0;
}