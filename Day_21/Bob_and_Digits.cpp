#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, res = 0;
    cin >> n >> k;
    res = 1 + floor(log(n) / log(k));
    cout << res;

    return 0;
}