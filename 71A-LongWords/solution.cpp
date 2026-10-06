#include <iostream>
#include <string>
using namespace std;

int main() {
  int totalN = 1;
  cin >> totalN;
  string *words = new string[totalN];

  // take inputs
  for (int i = 0; i < totalN; i++) {
    cin >> words[i];
    int word_len = words[i].length();
    if (word_len > 10) {
      words[i] =
          string(1, words[i][0]) + to_string(word_len - 2) + words[i].back();
    }
  }

  for (int i = 0; i < totalN; i++) {
    cout << words[i] << endl;
  }

  delete[] words;
  return 0;
}
