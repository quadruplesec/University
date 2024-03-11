#include <iostream>

void trim(char s[]) {
  int len = -1, i = 0;

  //compute str length.
  while(s[i]) {
    len++;
    i++;
  }
  
  //loops to check for leading & trailing spaces 
  while (len >= 0 && s[len] == ' ') {
    s[len] = 0;
    len--;
  }
  
  while (len >= 0 && s[0] == ' ') {
    for (int i = 0; i < len; i++) {
      s[i] = s[i + 1];
    }
    s[len] = 0;
    len--;
  }
}
