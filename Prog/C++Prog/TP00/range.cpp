#include <iostream>

int main(void) {
  int x, y, i;
  std::cin >> x >> y;
  for (i = x; i <= y; i++) {
    std::cout << i << " ";
  }

  return 0;
}
