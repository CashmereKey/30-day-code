#include <iostream>
#include <vector>
using namespace std;

int area(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int area = 0;

    while (left < right)
    {
        int area1 = min(height[left], height[right]) * (right - left);
        area = max(area1, area);
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return area;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << area(height) << endl; // Output: 49
    return 0;
}
