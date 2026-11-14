#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string input;
  int one = 0, two = 0, three = 0;
  cin >> input;
  for (char c : input) {
    if (c == '1') {
      one++;
    } else if (c == '2') {
      two++;
    } else if (c == '3') {
      three++;
    }
  }
  bool first = true;

  for (int i = 0; i < one; i++) {
    if (!first) {
      cout << "+";
    }
    cout << "1";
    first = false;
  }

  for (int i = 0; i < two; i++) {
    if (!first) {
      cout << "+";
    }
    cout << "2";
    first = false;
  }

  for (int i = 0; i < three; i++) {
    if (!first) {
      cout << "+";
    }
    cout << "3";
    first = false;
  }
  return 0;
}
