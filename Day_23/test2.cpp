#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    // Your code here
    int n;
    long long sum = 0;
    cin >> n;
    int x;
    for (int i = 0; i < 4 * n - 1; i++)
    {
        cin >> x;
        sum += x;
    }
    int total = (n * (n + 1) / 2) * 4;
    cout << total - sum << endl;
}