#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 7 = {1, 3, 5, 7, 2, 4, 6}

  long long n = 0, k = 0;
  cin >> n >> k;
  long long output = 0;
  if (((n % 2 == 0) && (k <= n / 2)) ||
      ((n % 2 != 0) && (k <= ((n + 1) / 2)))) {
    output = (2 * k) - 1;
  } else {
    output = 2 * (k - ((n + 1) / 2));
  }
  cout << output;
  return 0;
}
