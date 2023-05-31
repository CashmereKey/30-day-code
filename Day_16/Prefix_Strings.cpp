#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100], t[100];
    cin >> s >> t;
    int x = strlen(s);
    int count = 0;

    for (int i = 0; i < x; i++)
    {
        if (s[i] == t[i])
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}