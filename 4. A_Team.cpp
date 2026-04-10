#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;
    int ans = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
            count++;
        if (b == 1)
            count++;
        if (c == 1)
            count++;
        if (count >= 2)
            ans++;
        count = 0;
    }

    cout << ans;
    return 0;
}