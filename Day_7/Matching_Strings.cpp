#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    char str1[100], str2[100], temp;
    cin >> str1 >> str2;
    int x = strlen(str1);
    bool count = true;
    for (int i = 0; i < x; i++)
    {
        if (str1[i] == str2[i])
        {
            continue;
        }
        else if (str1[i] != str2[i] && count)
        {

            temp = str2[i];
            str2[i] = str2[i + 1];
            str2[i + 1] = temp;
            count = false;
        }
        else
        {
            cout << "No";
            return 0;
        }
    }

    bool y = strcmp(str1, str2);
    if (!y)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}