#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;
  int passingScore = 0;
  bool found = false;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    int val = 0;
    cin >> val;
    if (i == k) {
      found = true;
      passingScore = val;
    }
    if (!found && val >= passingScore && val > 0) {
      count++;
    }
    if (val == passingScore && val > 0) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
