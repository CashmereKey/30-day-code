#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0, res = 0;

    cin >> n;
    for (int i = 0; i < (n + 1); i++)
    {
        res += i;
    }
    res *= 4;

    for (int i = 1; i < 4 * n; i++)
    {
        int a;
        cin >> a;
        s += a;
    }

    cout << res - s;

    return 0;
}
