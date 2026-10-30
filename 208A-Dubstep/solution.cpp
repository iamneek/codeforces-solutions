#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string full, result;
  cin >> full;
  for (int i = 0; i < full.length(); i++) {
    if (full[i] == 'W' && full[i + 1] == 'U' && full[i + 2] == 'B') {
      if (!result.empty() && result.back() != ' ') {
        result += (' ');
      }
      i += 2;
      continue;
    }
    result += full[i];
  }
  cout << result;
  return 0;
}
