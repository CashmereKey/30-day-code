#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, res;
    cin >> n;
    n = n * 4;
    n--;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                continue;
            }
        }

        if (count < 4)
        {
            cout << arr[i];

            return 0;
        }
        else
        {
            count = 0;
            continue;
        }
    }

    return 0;
}