#include <iostream>

int main(void) {
  int n, i;
  std::cin >> n;

  for (i = 1; i < n; i++) {
    if (n % i == 0) std::cout << i << " ";
  }

  return 0;
}
