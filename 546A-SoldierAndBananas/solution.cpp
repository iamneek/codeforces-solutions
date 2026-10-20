#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int k = 0, n = 0, w = 0;
  cin >> k >> n >> w;
  int sum = 0;
  if (w == 1) {
    sum = 1;
  } else {
    sum = (w * (w + 1)) / 2;
  }
  int fin = n - (k * sum);
  if (fin < 0) {
    cout << abs(fin);
  } else {
    cout << 0;
  }
  return 0;
}
