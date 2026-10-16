#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int fr_cor = 0;

  cin >> fr_cor;
  int count = 0;
  int mod = fr_cor % 5;
  count += (fr_cor - mod) / 5;
  if (mod > 0)
    count++;
  cout << count;
  return 0;
}
