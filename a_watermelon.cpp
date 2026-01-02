#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int substractor = 2;

  if (n <= 2) {
    cout << "NO";
    return 0;
  }

  while (substractor <= n / 2) {
    int my_number = n - substractor;
    if (my_number % 2 == 0) {
      cout << "YES";
      return 0;
    } else {
      substractor = substractor + 2;
    }
  }
  cout << "NO";
  return 0;
}
