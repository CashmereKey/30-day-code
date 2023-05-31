#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    cin >> str;
    int x = strlen(str);
    int pos, count = 0;
    for (int i = 0; i < x; i++)
    {
        if (str[i] == 'a')
        {
            pos = i + 1;
            count++;
        }
        else
        {
            continue;
        }
    }

    if (count > 0)
    {

        cout << pos;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}