#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");

    int n, k, count = 0;
    int a, b, c;

    cin >> n >> k;
    // for (int i = 1; i < n; i++)
    // {
    //     if (k * i == a + b && k * i == c + b && k * i == a + c)
    //     {
    //         count++;
    //     }
    // }

    for (int a = 1; a <= n; a++)
    {

        for (int b = 1; b <= n; b++)
        {
            if ((a + b) % k == 0)
            {

                for (int c = 1; c <= n; c++)
                {
                    if (a + b >= k && b + c >= k && c + a >= k)
                    {

                        // if ((b + c) % k == 0 && (c + a) % k == 0)
                        // {
                        //     count++;
                        // }
                        cout << c << endl;
                        if (k * a == a + b && k * a == c + b && k * a == a + c)
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    cout << endl
         << count;

    return 0;
}