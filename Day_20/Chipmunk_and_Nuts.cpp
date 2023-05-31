#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, temp = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > 10)
        {
            sum += (temp - 10);
        }
        else
        {
            continue;
        }
    }
    cout << sum;

    return 0;
}