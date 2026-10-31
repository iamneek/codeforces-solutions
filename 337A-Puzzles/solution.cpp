#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0, m = 0;
  cin >> n >> m;
  vector<int> all(m, 0);

  for (int i = 0; i < m; i++) {
    cin >> all[i];
  }
  sort(all.begin(), all.end());
  int lowest = INT_MAX;
  for (int i = 0; i <= m - n; i++) {
    int diff = all[i + n - 1] - all[i];
    if (diff < lowest) {
      lowest = diff;
    }
  }

  cout << lowest;

  return 0;
}
