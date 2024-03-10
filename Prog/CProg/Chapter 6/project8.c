#include <stdio.h>

int main(void) {
    int month_days, starting_day, i, day_of_week, n;
    printf("Enter number of days in month: ");
    scanf("%d", &month_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);
    
    n = starting_day - 1;
    while(n > 0) {
        printf("   ");
        n--;
    }

    for(i = 1, day_of_week = starting_day; i <= month_days; i++, day_of_week++) {
        printf("%2d ", i);
        if (day_of_week == 7 || i == month_days) {
            printf("\n");
            day_of_week = 0;
        }
    }

    return 0;
}