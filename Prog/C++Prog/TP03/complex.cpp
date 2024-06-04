#include "complex.h"
#include <cmath>

void add(const complex& a, const complex& b, complex& r) {
  r.x = a.x + b.x;
  r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r){
  r.x = a.x * b.x - a.y * b.y;
  r.y = a.x * b.y + b.x * a.y;
}

double norm(const complex& c) {
  return std::sqrt(c.x * c.x + c.y * c.y);
}
