#include <iostream>
#include <unordered_map>
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
    unordered_map<char, int> countmap;
    for (char c : str) {
      countmap[c]++;
    }
    int nodds = 0;
    for (const auto &[ch, count] : countmap) {
      if (count % 2 != 0)
        nodds++;
    }

    if (nodds - k <= 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
