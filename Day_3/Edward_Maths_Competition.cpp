#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin >> n;
    int even = n / 2;
    int odd = n - even;

    // cout << (n / 2) * (n - (n / 2));
    cout << even * odd;

    return 0;
}