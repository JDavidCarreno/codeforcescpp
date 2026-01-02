#include <iostream>

using namespace std;

int main() {
  int number;

  cin >> number;

  for (int i = 0; i < number; i++) {
    string word;
    cin >> word;
    if (word.size() <= 10) {
      cout << word << endl;
    } else {
      string middle_part = word.substr(1, word.size() - 2);
      cout << word[0] << middle_part.size() << word[word.size() - 1] << endl;
    }
  }

  return 0;
}
