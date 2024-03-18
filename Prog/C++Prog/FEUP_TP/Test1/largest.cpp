#include "interval.h"

int interval_duration(interval x) {
    if (x.start.m > x.end.m) {
        x.end.h -= 1;
        x.end.m += 60;
    }
    int hours = x.end.h - x.start.h;
    int minutes = x.end.m - x.start.m;
    int total = minutes + hours * 60;

    return total;
}

interval largest(const interval a[], int n){
    int max = interval_duration(a[0]);
    interval largest = a[0];

    for (int i = 0; i < n; i++) {
        if (interval_duration(a[i]) > max) {
            max = interval_duration(a[i]);
            largest = a[i];
        }
    }

    return largest;
}