#include <iostream>

int main(void) {
  int i, n;
  std::cin >> n;
  for (i = 1;i <= n;i++) {
    if (i % 3 == 0 && i % 5 == 0) continue;
    else if (i % 3 == 0) std::cout << "Fizz ";
    else if (i % 5 == 0) std::cout << "Buzz ";
    else std::cout << i << " ";
  }

  return 0;
}
