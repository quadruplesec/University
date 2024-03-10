#include "time_of_day.h"

time_of_day tick(time_of_day t) { //return time after 1 minute elapsed!
  time_of_day time {t.h, t.m};
  time.m += 1;

  if (time.m >= 60) {
    time.h += 1;
    time.m -= 60;
  }

  if (time.h >= 24) {
    time.h -= 24;
  }
  
  return time;
}
