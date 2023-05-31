#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, key, count = 0;
    cin >> n;
    int a[n], b[n];
    n -= 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    if (a[0] == a[1] || a[0] == b[1])
    {
        key = a[0];
    }
    else if (b[0] == b[1] || b[0] == a[1])
    {
        key = b[0];
    }
    else
    {
        key = -1;
    }

    if (key == -1)
    {
        cout << "No";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == key || b[i] == key)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count == n)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }

    return 0;
}