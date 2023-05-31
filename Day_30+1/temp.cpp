#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int temp = 1;

    if (B > A)
    {
        temp = ceil(static_cast<double>(B) / A);
    }
    cout << temp;
    return 0;
}
