#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 0;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n = 0, q = 0;
    cin >> n >> q;
    long long og_sum = 0;
    vector<int> a(n, 0);
    for (int j = 0; j < n; j++) {
      cin >> a[j];
      og_sum += a[j];
    }

    vector<int> prefsum(n, 0);
    prefsum[0] = a[0];
    for (int x = 1; x < n; x++) {
      prefsum[x] = prefsum[x - 1] + a[x];
    }
    for (int j = 0; j < q; j++) {
      int l = 0, r = 0, k = 0;
      cin >> l >> r >> k;
      long long sum = prefsum[r - 1] - (l > 1 ? prefsum[l - 2] : 0);
      long long ksum = (r - l + 1) * k;
      long long fin_sum = og_sum - sum;
      fin_sum += ksum;
      cout << ((fin_sum % 2 != 0) ? "YES\n" : "NO\n");
    }
  }

  return 0;
}
