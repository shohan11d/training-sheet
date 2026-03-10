#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, h;
  cin >> n >> h;
  int width = 0;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] > h)
      width = width + 2;
    else
      width = width + 1;
  }
  cout << width;
  return 0;
}