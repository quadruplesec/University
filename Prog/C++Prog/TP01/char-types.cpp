#include <iostream>

int main(void) {
  int n{0}, i{0}, letters{0}, characters{0}, digits{0};
  char ch{};

  std::cin >> n;

  do {
    std::cin >> ch;
    if (ch <= '9' && '0' <= ch) ++digits;
    else if ((ch >= 'a' && 'z' >= ch) || (ch >= 'A' && 'Z' >= ch)) ++letters;
    else ++characters;
    ++i;
  } while (i < n);
  
  std::cout << letters << " " << digits << " " << characters << std::endl;

  return 0;
}
