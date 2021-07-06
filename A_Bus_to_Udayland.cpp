#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    char arr[a][5];
    ll flag = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (j == 1 || j == 4)
            {
                if (flag == 0)
                {
                    if (arr[i][j - 1] == 'O' && arr[i][j] == 'O')
                    {
                        arr[i][j - 1] = '+';
                        arr[i][j] = '+';
                        flag = 1;
                    }
                }
            }
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}