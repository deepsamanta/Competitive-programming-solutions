#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll m, n;
    cin >> m >> n;
    char arr[m][n];
    ll flag = 0;
    for (int i = 0; i < m; i++)
    {
        if (i % 2 != 0)
        {
            if (flag == 0)
                flag = 1;
            else
            {
                flag = 0;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                arr[i][j] = '#';
            }
            else if (1 % 2 != 0 && flag == 1)
            {
                arr[i][j] = '.';
            }

            else if (1 % 2 != 0 && flag == 0)
            {
                arr[i][j] = '.';
            }

            if (i % 2 != 0 && flag == 0 && j == 0)
            {
                arr[i][j] = '#';
            }
            if (i % 2 != 0 && flag == 1 && j == n - 1)
            {
                arr[i][j] = '#';
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}