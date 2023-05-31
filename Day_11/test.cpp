#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int k = 1;

        while (temp)
        {
            if (temp % 10 == 7)
            {
                k = 0;
            }
            temp = temp / 10;
        }
        temp = i;
        while (temp)
        {
            if (temp % 8 == 7)
            {
                k = 0;
            }
            temp = temp / 8;
        }
        count = count + k;
    }
    cout << count << endl;

    return 0;
}