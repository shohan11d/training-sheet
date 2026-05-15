#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;
  cin >> a >> b;
  int years = 0;

  while (b >= a) {
    b *= 2;
    a *= 3;
    years++;
  }
  cout << years;

  return 0;
}