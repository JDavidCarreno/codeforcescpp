#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int current_value = 0;

  for (int i = 0; i < n; i++) {
    char f, s, t;
    cin >> f >> s >> t;
    if (f == '+' || s == '+' || t == '+') {
      current_value++;
    } else if (f == '-' || s == '-' || t == '-') {
      current_value--;
    }
  }
  cout << current_value;
  return 0;
}
