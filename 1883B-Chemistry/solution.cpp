#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n = 0, k = 0;
    string str;
    cin >> n >> k;
    cin >> str;
    int count[26] = {0};
    for (int i = 0; i < n; i++) {
      count[str[i] % 26]++;
    }
    if (n % 2 == 0) {

    } else {
    }
  }

  return 0;
}
