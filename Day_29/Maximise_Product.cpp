#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max({a * b, a * d, b * c, c * d});
    cout << ans << endl;
    return 0;
}
