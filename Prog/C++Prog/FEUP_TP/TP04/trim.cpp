#include <iostream>

void trim(char s[]) {
  using namespace std;
  int len = -1, i = 0;

  //compute str length.
  while(s[i]) {
    len++;
    i++;
  }
  
  //loops to check for leading & trailing spaces 
  while (len >= 0 && s[len] == ' ') {
    //cout << "Current str: " << '"' << s << '"' << endl << "Current length: " << len << endl;
    s[len] = 0;
    len--;
  }
  
  while (len >= 0 && s[0] == ' ') {
    //cout << "Current str: " << s << endl << "Current length: " << len << endl;
    for (int i = 0; i < len; i++) {
      s[i] = s[i + 1];
    }
    s[len] = 0;
    len--;
  }
}
int main(void) {
  char s[] = "   ";
  trim(s);
  std::cout << '"' << s << '"' << '\n';
  return 0;
}
