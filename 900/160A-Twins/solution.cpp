#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;

  cin >> n;

  if (n == 1) {
    int v = 0;
    cin >> v;
    cout << 1;
    return 0;
  }

  int totalSum = 0;
  vector<int> mon(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> mon[i];
    totalSum += mon[i];
  }
  sort(mon.begin(), mon.end(), greater<int>());

  int amountThreshold = totalSum / 2;
  int sm = 0;
  int count = 0;
  for (int m : mon) {
    sm += m;
    count++;
    if (sm > amountThreshold) {
      break;
    }
  }
  cout << count;

  return 0;
}
