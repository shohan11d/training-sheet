#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, b;
    cin >> l >> b;

    int y1 = 0;
    int y2 = 0;

    while (true)
    {
        l *= 3;
        b *= 2;
        y1++;
        y2++;
        if (l > b)
            break;
    }
    cout << y1;

    return 0;
}