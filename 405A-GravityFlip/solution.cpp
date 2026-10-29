#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int column = 0;
  cin >> column;
  vector<int> ai(column, 0);
  for (int i = 0; i < column; i++) {
    cin >> ai[i];
  }

  sort(ai.begin(), ai.end());

  for (int i = 0; i < column; i++) {
    cout << ai[i] << (i == column - 1 ? "" : " ");
  }
  return 0;
}
