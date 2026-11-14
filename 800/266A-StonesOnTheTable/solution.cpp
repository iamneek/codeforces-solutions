#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int nStones = 0;
  string colors;

  cin >> nStones;
  cin >> colors;
  int removal = 0;
  char prev = colors[0];
  for (int i = 1; i < colors.length(); i++) {
    if (colors[i] == prev) {
      removal++;
    } else {
      prev = colors[i];
    }
  }

  cout << removal;
  return 0;
}
