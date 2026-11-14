#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int fcase = 0;
  int lcase = 0, ucase = 0;

  for (char c : s) {
    if (c >= 97) {
      lcase++;
      if (lcase > s.length() / 2)
        fcase = 0;
    } else {
      ucase++;
      if (ucase > s.length() / 2)
        fcase = 1;
    }
  }
  if (fcase == 0) {
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return tolower(c); });
  } else {

    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return toupper(c); });
  }

  cout << s;

  return 0;
}
