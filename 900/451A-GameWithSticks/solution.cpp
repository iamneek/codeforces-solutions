#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0, m = 0;
  cin >> n >> m;
  int winner =
      -1; // here 0 represents akshat and 1 is for malvika., -1 is placeholder.
  while (n != 0 && m != 0) {
    n--;
    m--;
    winner = (winner == 0 ? 1 : 0);
  }
  cout << (winner == 0 ? "Akshat" : "Malvika");
  return 0;
}
