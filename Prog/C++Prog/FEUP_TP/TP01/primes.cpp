#include <iostream>

int main(void) {
  int n, k, i, count;
  
  std::cin >> n;

  for (k = 2; k <= n ; ++k) {
    for (count = 0, i = 2; i <= k; ++i) if (k % i == 0) count += 1;
    if (count <= 1) std::cout << k << " ";
  }
  
  std::cout << std::endl;

  return 0;
}
