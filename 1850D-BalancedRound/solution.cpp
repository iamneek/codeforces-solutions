#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n = 0, k = 0, count = 0;
    cin >> n >> k;
    vector<int> ns(n, 0);
    for (int j = 0; j < n; j++) {
      cin >> ns[j];
    }
    sort(ns.begin(), ns.end());
    for (int j = 0; j < n; j++) {
      if (j + 1 <= (n - 1)) {
        if ((ns[j + 1] - ns[j]) <= k) {
          count++;
        }
      }
    }
    cout << count << "\n";
  }

  return 0;
}
