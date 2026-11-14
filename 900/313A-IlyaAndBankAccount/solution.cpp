#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;
  cin >> n;

  if (n >= 0) {
    cout << n;
  } else {
    int lst = n / 10;
    int remlast = n % 10;
    int scd = (n / 10) / 10;
    scd *= 10;
    scd += remlast;
    if (lst > scd) {
      cout << lst;
    } else {
      cout << scd;
    }
  }

  return 0;
}
