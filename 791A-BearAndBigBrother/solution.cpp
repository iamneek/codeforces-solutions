#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int w1 = 0, w2 = 0;

  cin >> w1 >> w2;
  int year = 0;

  while (w1 <= w2) {
    w1 = 3 * w1;
    w2 = 2 * w2;
    year++;
  };

  cout << year;
  return 0;
}
