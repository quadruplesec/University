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
  int occurences = 0, total_minutes;
  time_of_day max, min;
  
  interval* c = new interval[n];

  int len = 0;
  for (int i = 0; i < n; ++i) {
    if (in_interval(a[i], t)) {
      c[len] = a[i];
      ++len;
    }
  }

  if (occurences == 0) {
    u = {t, t};
    delete[] c;
    return 0;
  }
  
  min = c[0].start;
  max = c[0].end;
  
  for (int i = 0; i < len; i++) {
    if (c[i].start.h < min.h || (c[i].start.h == min.h && c[i].start.m < min.m)) {
      min = c[i].start;
    }
    if (c[i].end.h > max.h || (c[i].end.h == max.h && c[i].end.m > max.m)) {
      max = c[i].end;
    }
  }

  u = {min, max};
  
  int b = 60 - min.m;
  total_minutes += b;
  min.h += 1;
  total_minutes += max.m;
  total_minutes += 60 * (max.h - min.h);
  
  delete[] c;
  return total_minutes;
}
