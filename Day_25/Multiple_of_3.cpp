#include <bits/stdc++.h>
using namespace std;

int ans(int n)
{
    vector<int> digits;
    while (n > 0)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
    reverse(digits.begin(), digits.end());
    long long int digit_sum = accumulate(digits.begin(), digits.end(), 0);
    if (digit_sum % 3 == 0)
    {
        return 0;
    }
    for (int i = 0; i < digits.size(); i++)
    {
        if ((digit_sum - digits[i]) % 3 == 0)
        {
            return 1;
        }
    }
    for (int i = 0; i < digits.size(); i++)
    {
        for (int j = i + 1; j < digits.size(); j++)
        {
            if ((digit_sum - digits[i] - digits[j]) % 3 == 0)
            {
                return -1;
            }
        }
    }
    return INT_MAX;
}

int main()
{
    int n;
    cin >> n;
    cout << ans(n) << endl;
    return 0;
}
