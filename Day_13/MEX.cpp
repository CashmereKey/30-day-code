#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, res, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            res = i;
            break;
        }
        count = 0;
    }

    cout << res;
    return 0;
}