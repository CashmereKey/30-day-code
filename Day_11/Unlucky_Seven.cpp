#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = i;
        int temp = 1;
        while (k)
        {
            if (k % 10 == 7)
                temp = 0;
            k /= 10;
        }
        k = i;

        while (k)
        {
            if (k % 8 == 7)
                temp = 0;
            k /= 8;
        }
        count += temp;
    }

    cout << count;

    return 0;
}