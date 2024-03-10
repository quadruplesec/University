#include "fraction.h"

int gcd(fraction frac) {
  int a = frac.num;
  int b = frac.den;

  for(;;) {
    if (b == 0) return a;
    int e = b;
    b = a % b;
    a = e;
  }
}

fraction sum(const fraction fa[], int n) {
  if (n == 1) return fa[0];
  
  fraction a = fa[0];
  for (int i = 1; i < n; i++) {
    a.num *= fa[i].den;
    a.num += (fa[i].num * a.den);
    a.den *= fa[i].den;
    int b = gcd(a);
    a.num /= b;
    a.den /= b;
  }

  if (a.den < 0) {
    a.den *= -1;
    a.num *= -1;
  }

  return a;
}
