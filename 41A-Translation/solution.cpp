#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, t;

  cin >> s;
  cin >> t;
  reverse(s.begin(), s.end());
  if (t == s) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
