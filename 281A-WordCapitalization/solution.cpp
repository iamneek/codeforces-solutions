#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string input;
  cin >> input;
  input[0] = toupper(input[0]);
  cout << input;
  return 0;
}
