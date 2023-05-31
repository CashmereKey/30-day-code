#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, y, z;
    cin >> x >> y >> z;
    if ((y < 0 && z < 0 && y > z && x < y) || (x > y && y < z && y > 0 && z > 0))
    {
        cout << -1;
        return 0;
    }

    if ((x < 0 && y < 0 && x <= y) || (x > 0 && y > 0 && x >= y))
    {

        cout << abs(z) + abs(y - z) + abs(y - x) << endl;
    }
    else
    {

        cout << abs(x) << endl;
    }

    return 0;
}