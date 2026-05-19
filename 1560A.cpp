#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    cout << endl << "test " << 10 - t << " starts" << endl;

    int x;
    cin >> x;
    int sum = 1;
    int el = 1;

    while (el <= x) {
      cout << "el:" << el << endl;
      el++;
    }
    cout << endl << "test " << 10 - t << " ends" << endl;
  }

  return 0;
}