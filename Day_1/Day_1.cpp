#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, k, x, sum = 0;
    int a[n];
    int max = 0, index;

    cin >> n >> k >> x;
    int count = k;

    // cout << endl;

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    while (count > 0)
    {

        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                index = i;
            }
            else
            {
                continue;
            }
        }

        if (max > x)
        {
            a[index] -= x;
            max = 0;
            index = 0;
        }

        else
        {
            a[index] = 0;
            max = 0;
            index = 0;
        }

        count--;
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << sum;

    return 0;
}
