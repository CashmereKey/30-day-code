#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int a, b, k;
    cin >> a >> b >> k;
    int count = 0;
    while (b > a)
    {
        a *= k;
        count++;
    }
    cout << count;

    return 0;
}