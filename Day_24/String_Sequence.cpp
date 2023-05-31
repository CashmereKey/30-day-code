#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> P(26);
    for (int i = 0; i < 26; i++)
    {
        cin >> P[i];
    }

    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + (P[i] - 1);
        cout << c;
    }

    return 0;
}
