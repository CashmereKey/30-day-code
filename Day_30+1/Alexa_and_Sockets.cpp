#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b;
    float temp;
    cin >> a >> b;
    temp = b / a;
    if (b <= a)
    {
        cout << 1;
        return 0;
    }
    else
    {

        cout << ceil(temp);
    }

    return 0;
}