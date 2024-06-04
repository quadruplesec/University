#include "fraction.h"

int gcd(int a, int b) {
  if (b) {
    return gcd(b, a%b);
  }
  else {
    return a;
  }
}

fraction add(fraction a, fraction b) {
  a.num *= b.den;
  b.num *= a.den;
  fraction c {a.num + b.num, a.den * b.den};
  int d = gcd(c.num, c.den);
  if (c.den / d > 0) { 
    return {c.num / d, c.den / d};
  }
  else {
    return {-c.num / d, -c.den/d};
  }
}

fraction mul(fraction a, fraction b) {
  a.num *= b.num;
  a.den *= b.den;
  int c = gcd(a.num, a.den);
  if (a.den / c > 0) {
    return {a.num / c, a.den / c};
  }
  else {
    return {-a.num / c, -a.den / c};
  }
}

int main(void) {return 0;}
