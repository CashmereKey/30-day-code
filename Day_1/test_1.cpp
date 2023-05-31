#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = max(((a[0] * n) - (k * x)), 0);
    for (int i = 1; i < n; i++)
    {
        ans = min(ans, max(((a[i] * n) - (k * x)), 0));
    }
    cout << ans;
    return 0;
}