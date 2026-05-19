// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int s1, s2, s3, s4;
//         cin >> s1 >> s2 >> s3 >> s4;

//         int w1 = max(s1, s2);
//         int w2 = max(s3, s4);

//         vector<int> v = {s1, s2, s3, s4};
//         sort(v.begin(), v.end());

//         int strongest = v[3];
//         int secondStrongest = v[2];

//         if ((w1 == strongest && w2 == secondStrongest) ||
//             (w2 == strongest && w1 == secondStrongest))
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;

    int winner1 = max(p1, p2);
    int winner2 = max(p3, p4);

    if (winner1 == p1 && winner2 == p3) {
      if (p1 >= p4 && p3 >= p2) {
        cout << "YES" << endl;
        continue;
      }
    } else if (winner1 == p2 && winner2 == p3) {
      if (p2 >= p4 && p3 >= p1) {
        cout << "YES" << endl;
        continue;
      }
    } else if (winner1 == p1 && winner2 == p4) {
      if (p1 >= p3 && p4 >= p2) {
        cout << "YES" << endl;
        continue;
      }
    } else if (winner1 == p2 && winner2 == p4) {
      if (p2 >= p3 && p4 >= p1) {
        cout << "YES" << endl;
        continue;
      }
    }
    cout << "NO" << endl;
  }
}