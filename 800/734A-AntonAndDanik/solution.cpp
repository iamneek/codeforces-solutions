#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int ngames = 0;
  string winEntries;

  cin >> ngames;
  cin >> winEntries;

  int a_c = 0, d_c = 0;
  for (char c : winEntries) {
    if (c == 'A') {
      a_c++;
    } else {
      d_c++;
    }
  }

  if (a_c > d_c)
    cout << "Anton";
  else if (d_c > a_c)
    cout << "Danik";
  else
    cout << "Friendship";

  return 0;
}
