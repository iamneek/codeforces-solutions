#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int count = 0;
    long long t = 0;
    cin >> t;
    while (t != 1) {
      if (t % 6 == 0) {
        t /= 6;
        count++;
      } else {
        if (t % 3 == 0) {
          t *= 2;
          count++;
        } else {
          count = -1;
          break;
        }
      }
    }
    cout << count << '\n';
  }
  return 0;
}
