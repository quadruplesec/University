bool isLeapYear(int year) {
   if (year % 4 != 0)
      return false;
   if (year % 100 != 0)
      return true;
   if (year % 400 == 0)
      return true;
   else
      return false;
}

int fetchMonthLength(int month, int year) {
  int length;
  switch(month) {
    case 1: case 3: case 5: case 7: 
    case 8: case 10: case 12:
      length = 31;
      break;

    case 2:
      if (isLeapYear(year)) {
        length = 29;
        break;
      } else {
        length = 28;
        break;
      }
    default:
      length = 30;
      break;
  }
  
  return length;
}

void advance(int delta, int& d, int& m, int& y){
  while (delta >= 365) {
    if (isLeapYear(y + 1) && delta > 365) {
      delta -= 366;
      y++;
    }
    else {
      delta -= 365;
      y++;
    }

  }

  while (delta > 0) {
    int monthLength = fetchMonthLength(m,y);
    int daysLeft = monthLength - d;

    if (delta > daysLeft) {
      m++;
      d = 1;
      delta -= (daysLeft + 1);

      if (m > 12) {
        y++;
        m = 1;
      }

    } else {
      d += delta;
      delta = 0;
    }
  }
}
