#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // -1 if the first string is less than second one, 1 if second is less than
  // first one, and 0 if equal (case doesnot matter)

  string str1, str2;

  cin >> str1 >> str2;
  transform(str1.begin(), str1.end(), str1.begin(),
            [](unsigned char c) { return tolower(c); });

  transform(str2.begin(), str2.end(), str2.begin(),
            [](unsigned char c) { return tolower(c); });
  if (str1 == str2) {
    cout << 0;
  } else if (str1 > str2) {
    cout << 1;
  } else {
    cout << -1;
  }

  return 0;
}
