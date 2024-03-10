#include <ctype.h>
#include <iostream>

int nrl(const char s[], char low[]) {
  int not_repeated = 0;
  int alphabet_track[26];
  for (int i = 0; i < 26; i++) alphabet_track[i] = 0;

  char c = s[0];
  for (int i = 0; ; i++) {
    c = tolower(s[i]);
    if (c == '\0') break;
    if (c == ' ') continue;
    alphabet_track[c-97]++;
  }
  
  for (int i = 0; i < 26; i++) {
    if (alphabet_track[i] == 1) {
      low[not_repeated] = 97 + i;
      not_repeated++;
    }
  }

  low[not_repeated] = '\0';

  return not_repeated;
}

int main(void)
{ const char s[] = "  F C U P  F E U P  Porto  ";
  char l[27] = { -1 };
  int r = nrl(s, l);
  std::cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n";
  return 0;
}
