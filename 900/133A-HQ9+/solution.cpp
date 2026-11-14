#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string in;
  cin >> in;

  for (char a : in) {
    if (a == 'H' || a == 'Q' || a == '9') {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";

  return 0;
}
