#include <cmath>

int solve_eq(int a, int b, int c, double& x1, double& x2) {
  int delta = b*b - 4*a*c;
  
  if (delta < 0) {
    x1 = NAN;
    x2 = NAN;
    return 0;
  }

  else if (delta == 0) {
    x1 = ((double)-b)/((double)(2*a));
    x2 = NAN;
    return 1;
  }

  x1 = (-b-std::sqrt(delta)) / (2*a);
  x2 = (-b+std::sqrt(delta)) / (2*a);
  return 2;
}

