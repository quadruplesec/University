#include <iostream>

//credit to Toomtarm Kung for this function.
bool isPrime(int num) {
  if (num < 2) return false;
  if (num == 2) return true;
  if (num % 2 == 0) return false;
  
  for (int i = 3 ; (i * i) <= num ; i += 2) {
    if (num % i == 0) return false;
  }
  
  return true;
}

bool isPernicious(int num) {
  int count{0};
  
  while (num > 0) {
    if (num % 2 != 0) ++count;
    num = num >> 1;
  }
  if (isPrime(count) == true) return true;
  return false;
}

int main(void) {
  int lowBound, uppBound;
  std::cin >> lowBound >> uppBound;

  for (;lowBound <= uppBound;++lowBound) {
    if (isPrime(lowBound) == false) continue;
    if (isPernicious(lowBound) == false) continue;
    std::cout << lowBound << " ";
  }

  std::cout << std::endl;

  return 0;
}
