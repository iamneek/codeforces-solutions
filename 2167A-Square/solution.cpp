#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int totalIn = 0;
  if (!(cin >> totalIn))
    return 1;

  vector<string> output;
  for (int i = 0; i < totalIn; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d) {
      output.push_back("YES");
    } else
      output.push_back("NO");
  }
  for (string res : output) {
    cout << res << endl;
  }
  return 0;
}
