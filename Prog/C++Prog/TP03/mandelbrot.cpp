#include "complex.h"
#include <cmath>

complex add(const complex& a, const complex& b) {
  complex r;
  r.x = a.x + b.x;
  r.y = a.y + b.y;

  return r;
}

complex mul(const complex& a, const complex& b) {
  complex r;
  r.x = a.x * b.x - a.y * b.y;
  r.y = a.x * b.y + b.x * a.y;
  
  return r;
}

double norm(const complex& c) {
  return std::sqrt(c.x * c.x + c.y * c.y);
}

complex mandelbrot_aux(const complex c, unsigned int n, complex z_n) {
  if (n == 0) {
    return {0,0};
  }

  else {
    return add(mul(mandelbrot_aux(c, n-1, z_n), mandelbrot_aux(c, n-1, z_n)), c);
  }
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n) {
  z_n = mandelbrot_aux(c, n, z_n);
}


