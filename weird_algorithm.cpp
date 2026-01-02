#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;

  cin >> n;

  vector<long> result;

  while (true) {
    result.push_back(n);
    if (n == 1) {
      break;
    }
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
  }

  for (long x : result) {
    cout << x << " ";
  }

  return 0;
}
