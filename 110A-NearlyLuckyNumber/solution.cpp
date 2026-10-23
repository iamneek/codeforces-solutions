#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n = 0;
  cin >> n;
  int cLucky = 0;

  while (!(n <= 0)) {
    int m = n % 10;
    n /= 10;
    if (m == 4 || m == 7) {
      cLucky++;
    }
  }

  if (cLucky == 7 || cLucky == 4) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
