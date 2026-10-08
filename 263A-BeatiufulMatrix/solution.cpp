#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int moveCount = 0;
  for (int i = 0; i < 5; i++) {
    int ar[5];
    cin >> ar[0] >> ar[1] >> ar[2] >> ar[3] >> ar[4];
    for (int j = 0; j < 5; j++) {
      if (ar[j] == 1) {
        moveCount += abs(j - 2);
        moveCount += abs(i - 2);
      }
    }
  }

  cout << moveCount << endl;

  return 0;
}
