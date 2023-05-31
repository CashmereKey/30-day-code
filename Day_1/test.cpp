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

        sort(a, a + n);

        if (a[n - 1] > x)
        {
            a[n - 1] -= x;
        }
        else
        {
            a[n - 1] = 0;
        }
        
        count--;
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << endl
         << "Sum: " << sum;

    return 0;
}
