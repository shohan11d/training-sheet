#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
      sum += v[i];
    }

    if (sum == n) {
      cout << "0" << endl;
    } else if (sum > n) {
      cout << sum - n << endl;
    } else if (sum < n) {
      cout << "1" << endl;
    } else if (sum <= 0) {
      cout << "sum+abs(sum)+n" << endl;
    }
  }

  return 0;
}