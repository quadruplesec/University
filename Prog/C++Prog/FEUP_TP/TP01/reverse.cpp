#include <cmath>
#include <iostream>
#include <math.h>

int main(void) {
  int i{0}, reversed{0}, x{0}, num, num2, n;
  std::cin >> num;
  
  num2 = num;

  while (num2 > 0) {
    ++x;
    num2 /= 10;
  }

  while(num > 0) {
    n = num %  10;
    reversed += n * pow(10, x-i-1);
    num = num / 10;
    ++i;
  }

  std::cout << reversed << std::endl;

  return 0;
}
