#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string n;
  cin >> n;

  vector<int> cadenas;
  int count = 1;

  for (int i = 1; i < n.size(); i++) {
    if (n[i - 1] == n[i]) {
      count++;
    } else {
      cadenas.push_back(count);
      count = 1;
    }
  }

  auto number = max_element(cadenas.begin(), cadenas.end());

  cout << *number;

  return 0;
}
