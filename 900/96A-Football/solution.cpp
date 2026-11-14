#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string input, result = "NO";
  cin >> input;
  char last = input[0];
  int dangerCount = 1;
  for (int i = 1; i < input.length(); i++) {
    if (input[i] == last) {
      dangerCount++;
      if (dangerCount >= 7) {
        result = "YES";
        break;
      }
    } else {
      last = input[i];
      if (dangerCount > 1 && dangerCount < 7) {
        dangerCount = 1;
      }
    }
  }

  cout << result;

  return 0;
}
