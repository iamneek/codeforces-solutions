#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    long long n = 0, k = 0, x = 0;
    cin >> n >> k >> x;
    long long min_sum = 0, max_sum = 0;
    min_sum = (k * (k + 1)) / 2;
    for (int j = n - k + 1; j <= n; j++) {
      max_sum += j;
    }
    if ((x > max_sum) || (x < min_sum)) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }

  return 0;
}
