#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 0;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int num = 0;
    cin >> num;
    int dv = num / 2020;
    int md = num % 2020;
    if (dv >= md) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
