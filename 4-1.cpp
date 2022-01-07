#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter n and m: ";
    cin >> n >> m;
    int flag = 1;
    for (int index = 0; index < n; ++index)
    {
        for (int index2 = 0; index2 < m; ++index2)
        {
            if (flag == 1)
            {
                cout << '#';
                flag = -1;
            }
            else
            {
                cout << '*';
                flag = 1;
            }
        }
        cout << '\n';
        flag *= -1;
    }
}