#include "interval.h"

bool in_interval(const interval range, const time_of_day t) {
  if (t.h < range.start.h || t.h > range.end.h) {
    return false;
  }
  if ((t.h == range.start.h && t.m < range.start.m) || (t.h == range.end.h && t.m >= range.end.m)) {
    return false;
  }
  return true;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
  int occurences = 0, total_minutes = 0;
  time_of_day max, min;
  
  int len = 0;
  for (int i = 0; i < n; ++i) {
    if (in_interval(a[i], t)) {
      if (len == 0) {
        min = a[i].start;
        max = a[i].end;
      }
      else {
        if (a[i].start.h < min.h || (a[i].start.h == min.h && a[i].start.m < min.m)) {
          min = a[i].start;
        }
        if (a[i].end.h > max.h || (a[i].end.h == max.h && a[i].end.m > max.m)) {
          max = a[i].end;
        }
      }
      ++occurences;
      ++len;
    }
  }

  if (occurences == 0) {
    u = {t, t};
    return 0;
  }
  
  u = {min, max};
  
  int b = 60 - min.m;
  total_minutes += b;
  min.h += 1;
  total_minutes += max.m;
  total_minutes += 60 * (max.h - min.h);
  
  return total_minutes;
}
