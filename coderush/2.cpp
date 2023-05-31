#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {

        int n, l, s, count = 0;
        cin >> n >> l >> s;
        int arr[n], k[n];
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= l; j++)
            {
                k[i] += j;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (k[i] == s)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (count > 0)
        {

            cout << "YES";
        }
        else
        {

            cout << "NO";
        }
    }
    return 0;
}