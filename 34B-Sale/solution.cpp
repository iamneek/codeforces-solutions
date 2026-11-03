#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0, m = 0;
  int earning = 0;
  cin >> n >> m;
  vector<int> all(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> all[i];
  }
  sort(all.begin(), all.end());
  for (int i = 0; i < m; i++) {
    if (all[i] < 0) {
      earning += -1 * all[i];
    }
  }
  cout << (earning > 0 ? earning : 0);

  return 0;
}
