#include <iostream>

int main(void) {
  int x;
  std::cin >> x;
  if (x % 2 == 0) {
    std::cout << x << " is even" << std::endl;
  } else std::cout << x << " is odd" << std::endl;
  
  return 0;
}
