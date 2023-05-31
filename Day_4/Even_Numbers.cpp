#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, m;
    int count = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        if (i > n && i < m)
        {
            if (i % 2 == 0 && count < 5)
            {

                cout << i << " ";
                count++;
            }
        }
    }

    return 0;
}