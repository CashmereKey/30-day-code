#include <bits/stdc++.h>

using namespace std;

int main()
{
    int decimal, binary = 0, remainder, product = 1;

    cin >> decimal;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }

    int res;
    string s, str;

    s = to_string(binary);
    int x = 1, y = 2;

    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i] - '0') == x)
        {
            str += to_string(y);
        }

        else
        {
            str += s[i];
        }
    }

    res = stoi(str);

    cout << res;

    return 0;
}