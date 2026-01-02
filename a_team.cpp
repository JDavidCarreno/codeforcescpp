#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int counter = 0;
  for (int i = 0; i < n; i++) {
    int f, s, t;
    cin >> f >> s >> t;
    if (f + s + t >= 2) {
      counter++;
    }
  }
  cout << counter;
  return 0;
}
