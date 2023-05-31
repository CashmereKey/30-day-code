#include <bits/stdc++.h>
#include <omp.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int count = 0;
#pragma omp parallel for reduction(+ \
                                   : count)
    for (int a = 1; a <= n; a++)
    {

        for (int b = 1; b <= n; b++)
        {
            if ((a + b) % k == 0)
            {

                for (int c = 1; c <= n; c++)
                {
                    cout << c << endl;
                    if (a + b >= k && b + c >= k && c + a >= k)
                    {

                        if ((b + c) % k == 0 && (c + a) % k == 0)
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    cout << count;

    return 0;
}
