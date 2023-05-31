#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s[100], t[100];
    cin >> s >> t;
    int x = strlen(s);
    int y = strlen(t);
    if (s < t)
    {
        cout << "No";
        return 0;
    }
    for (int i = 0; i <= x - y; i++)
    {
        int j;

        for (j = 0; j < y; j++)
        {

            if (s[i + j] != t[j])
            {

                break;
            }
        }

        if (j == y)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}