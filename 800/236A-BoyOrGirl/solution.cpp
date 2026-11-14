#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string username;
  cin >> username;
  int count = 0;
  bool seen[256] = {false};

  for (char c : username) {
    unsigned char index = static_cast<unsigned char>(c);
    if (!seen[index]) {
      seen[index] = true;
      count++;
    }
  }

  if (count % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

  return 0;
}
