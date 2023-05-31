#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int N;
    cin >> N >> S;
    for (int i = 0; i < S.length(); i++)
    {
        S[i] = (S[i] - 'A' + N) % 26 + 'A';
    }
    cout << S << endl;
    return 0;
}
