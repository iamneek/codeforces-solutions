#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0, h = 0;
  cin >> n >> h;
  int width = 0;

  for (int i = 0; i < n; i++) {
    int hi = 0;
    cin >> hi;
    if (hi > h) {
      width += 2;
    } else {
      width += 1;
    }
  }
  cout << width;
  return 0;
}
