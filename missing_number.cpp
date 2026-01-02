#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;

  long long expected_sum = n * (n + 1) / 2;
  long long current_sum = 0;

  for (int i = 0; i < n - 1; i++) {
    int m;
    cin >> m;
    current_sum += m;
  }

  cout << expected_sum - current_sum << endl;

  return 0;
}
