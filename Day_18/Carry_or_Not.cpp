#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int count = 0, min = 0;
    string a, b;
    cin >> a >> b;
    int x = a.length();
    int y = b.length();
    if (x > y)
    {
        min = y;
    }
    else
    {
        min = x;
    }

        for (int i = 0; i < min; i++)
    {
        if ((a[x - 1 - i] + b[y - 1 - i] - 96) > 9)
        {
            count++;
            break;
        }
        else
        {
            continue;
        }
    }
    if (count > 0)
    {
        cout << "Hard";
    }
    else
    {
        cout << "Easy";
    }

    return 0;
}