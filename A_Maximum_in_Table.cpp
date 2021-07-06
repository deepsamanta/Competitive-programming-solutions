#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;

    ll arr[a][a];
    if (a == 1)
    {
        cout << 1 << endl;
    }
    else

    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
                }
            }
        }
        cout << arr[a - 1][a - 1] << endl;
    }
}