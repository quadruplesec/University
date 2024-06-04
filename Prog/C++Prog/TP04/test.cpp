#include <iostream>

int main(void) {
  char s[] = "2LEIC 022";
  int i = 0;
  do {i++;} while (s[i]!='\0' && s[i]!='2');
  s[i] = '\0';
  std::cout << i << " \"" << s << "\"\n";
  return 0;
} 
