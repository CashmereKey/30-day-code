#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, count = 0;
    cin >> a >> b >> c;

    int arr[] = {a + b, b + c, c + a};

    for (int i = 0; i < 3; i++)
    {

        if (arr[i] % 2 == 0 && arr[i] > 0)
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

    return 0;
}