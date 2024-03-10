#include <iostream>
#include <iomanip>

int main(void) {
  double piAprox = 0.0;
  int k, d;

  std::cin >> k >> d;
  
  for(int n = 0;n <= k;++n) {
    if (n % 2 == 0) piAprox += 1.0/(2.0*n + 1.0);
    else piAprox += -1.0/(2.0*n + 1.0);
    }
  
  piAprox *= 4;

  std::cout << std::fixed << std::setprecision(d) << piAprox << std::endl;

  return 0;
}


