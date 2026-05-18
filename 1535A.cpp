#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        int w1 = max(s1, s2);
        int w2 = max(s3, s4);

        vector<int> v = {s1, s2, s3, s4};
        sort(v.begin(), v.end());

        int strongest = v[3];
        int secondStrongest = v[2];

        if ((w1 == strongest && w2 == secondStrongest) ||
            (w2 == strongest && w1 == secondStrongest))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}