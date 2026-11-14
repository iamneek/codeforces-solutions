#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x = 0;
  int nos = 0;
  if (!(cin >> nos))
    return 1;

  for (int i = 0; i < nos; i++) {
    string inp;
    cin >> inp;
    if (inp.find("++") != std::string::npos) {
      x++;
    } else
      x--;
  }

  cout << x;

  return 0;
}
