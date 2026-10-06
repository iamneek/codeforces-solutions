#include <iostream>
using namespace std;

int main() {
  int n;
  int numQ = 1;
  cin >> numQ;
  int totalAnswerCount = 0;

  for (int i = 0; i < numQ; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2) {
      totalAnswerCount++;
    }
  }

  cout << totalAnswerCount;

  return 0;
}
