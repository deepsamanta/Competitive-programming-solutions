#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        char arr[a][b];
        ll sum = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
                if (i == a - 1 && j < b - 1)
                {
                    if (arr[i][j] == 'D')
                    {
                        sum++;
                    }
                }
                else if (i < a - 1 && j == b - 1)
                {
                    if (arr[i][j] == 'R')
                    {
                        sum++;
                    }
                }
                // else if (j == b - 1 && i < a - 1)
                // {
                //     if (arr[i][j] == 'R')
                //     {
                //         sum++;
                //     }
                // }
            }
        }
        cout << sum << endl;
    }
}