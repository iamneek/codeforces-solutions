#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    long long n;
    cin >> n;

    while (n % 2 == 0) {
      n /= 2;
    }

    if (n > 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
