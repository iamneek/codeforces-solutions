#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;
  cin >> n;
  int count = 1;
  int prev = 0;
  int prevCount = 0;
  cin >> prev;
  for (int _ = 0; _ < n - 1; _++) {
    int w = 0;
    cin >> w;
    if (w >= prev) {
      count++;
      prev = w;
    } else {
      if (count >= prevCount) {
        prevCount = count;
      }
      prev = w;
      count = 1;
    }
  }
  cout << (count > prevCount ? count : prevCount);
  return 0;
}
