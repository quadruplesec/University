#include <iostream>
int adigits(int a, int b, int c) {
  if (a >= b && a >= c) 
    return 100*a + 10*std::max(b,c) + std::min(b,c);
  else if (b >= a && b >= c) 
    return 100*b + 10*std::max(a,c) + std::min(a,c);
  else 
    return 100*c + 10*std::max(a,b) + std::min(a,b);
}

