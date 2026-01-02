#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> scores(n);

  for (int i = 0; i < n; i++) {
    cin >> scores[i];
  }

  int treshold = scores[k - 1];
  int counter = 0;

  for (int i = 0; i < n; i++) {
    if (scores[i] >= treshold && scores[i] > 0) {
      counter++;
    }
  }
  cout << counter;
  return 0;
}
