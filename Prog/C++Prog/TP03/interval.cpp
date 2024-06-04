/* CODIGO HORRIVEL AAAAAA*/

#include "interval.h"
#include <iostream>

bool b_greater_a(interval a, interval b) { //returns true if a < b
  if (a.start.h <= b.start.h && a.start.m <= b.start.m && a.end.h <= b.end.h) {
    return true;
  }  
  return false;
}

interval intersection(interval a, interval b) { //let us assume a <= b, after calling the b_greater_a function.
  if (!b_greater_a(a,b)) {
    interval c {{b.start.h, b.start.m}, {b.end.h, b.end.m}};
    b.start.h = a.start.h; b.start.m = a.start.m;

    b.end.h = a.end.h; b.end.m = a.end.m;
    a.start.h = c.start.h; a.start.m = c.start.m;
    a.end.h = c.end.h; a.end.m = c.end.m;
  }

  if (a.end.h < b.start.h || (a.end.h == b.start.h && a.end.m == b.start.m)) {
    return {{0,0}, {0,0}};
  }
  
  else if ((a.start.h < b.start.h || (a.start.h == b.start.h && a.start.m < b.start.m)) && (a.end.h > b.end.h || (a.end.h == b.end.h && a.end.m > b.end.m))) {
    return b;
  }

  return {{b.start.h,b.start.m}, {a.end.h,a.end.m}};
}

