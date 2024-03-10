#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int day1, month1, year1, day2, month2, year2;
    bool date1; //if date1 is TRUE, date1 is comes earlier in the calendar.

    printf("Enter the first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    printf("Enter the second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day2, &month2, &year2);

    if (year1 < year2) {
        date1 = true;
    }
    else if (year1 > year2) {
        date1 = false;
    }
    else if (month1 < month2) {
        date1 = true;
    }
    else if (month1 > month2) {
        date1 = false;
    }
    else if (day1 < day2) {
        date1 = true;
    }
    else if (day1 > day2) {
        date1 = false;
    }

    if (date1) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day1, month1, year1, day2, month2, year2);
    }
    else
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day2, month2, year2, day1, month1, year1);

    return 0;
}