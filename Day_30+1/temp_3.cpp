#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // your code goes here
        int w, x, y, z;

        cin >> w >> x >> y >> z;
        for (int i = 0; i < z; i++)
        {
            w += x;
            w -= y;
        }
        cout << w << endl;
    }
    return 0;
}
