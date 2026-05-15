#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int anton = 0, danik = 0;

  vector<char> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (char it : v) {
    if (it == 'A')
      anton++;
    else if (it == 'D')
      danik++;
    else {
      cout << "Friendship" << endl;
    }
  }

  if (anton > danik) {
    cout << "Anton" << endl;
  } else if (danik > anton) {
    cout << "Danik" << endl;
  } else {
    cout << "Friendship" << endl;
  }
  return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, anton = 0, danik = 0;
//     string s;

//     cin >> n >> s;

//     for (char c : s)
//         (c == 'A') ? anton++ : danik++;

//     cout << (anton > danik ? "Anton"
//             : danik > anton ? "Danik"
//             : "Friendship");
// }