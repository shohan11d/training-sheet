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

    vector<int> v(2 * n);
    int even = 0, odd = 0;

    for (int i = 0; i < 2 * n; i++) {
      cin >> v[i];
      v[i] % 2 == 0 ? even++ : odd++;
    }
    if (even == odd)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}