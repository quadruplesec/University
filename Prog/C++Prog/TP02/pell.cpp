#include <iostream>

unsigned long pell(unsigned long n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  
  unsigned long prev{0};
  unsigned long current{1};

  for (unsigned long i = 2; i <= n; i++) {
    unsigned long next = 2 * current + prev;
    prev = current;
    current = next;
  }
  
  return current;
}

int main(void) {
  std::cout << pell(50) << std::endl;
  return 0;
}
