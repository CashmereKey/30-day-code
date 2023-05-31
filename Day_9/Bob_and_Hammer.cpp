#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int x, y, z;

    cin >> x >> y >> z;

    if (x < y || x < z)
    {

        cout << "-1";
        return 0;
    }
    else
    {
        int distance = fabs(x);
        if (y > z)
        {
            distance += fabs(y - z);
        }
        cout << distance;
    }

    return 0;
}
