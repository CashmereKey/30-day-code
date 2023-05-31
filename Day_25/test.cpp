#include <bits/stdc++.h>
using namespace std;

int min_erased_digits(int N)
{
    int digit_sum = 0;
    int n = 0;
    while (N > 0)
    {
        int digit = N % 10;
        digit_sum += digit;
        n++;
        N /= 10;
    }
    if (digit_sum % 3 == 0)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if ((digit_sum - (digit_sum / 3) * 3) % 3 == 0)
        {
            return n - 1 - i;
        }
        digit_sum -= (digit_sum / 3);
    }
    return INT_MAX;
}

int main()
{
    int N;
    cin >> N;
    cout << min_erased_digits(N) << endl;
    return 0;
}
