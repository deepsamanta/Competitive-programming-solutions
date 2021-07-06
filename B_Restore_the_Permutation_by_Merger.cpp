#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll arr[a];
        int j = 0;
        for (int i = 0; i < 2 * a; i++)
        {
            ll c;
            cin >> c;

            if (i > 0)
            {
                ll checker = 0;
                for (int k = 0; k < j; k++)
                {
                    if (arr[k] != c)
                    {
                        checker++;
                    }
                }
                if (checker == j)
                {
                    arr[j] = c;
                    j++;
                }
            }
            else
            {
                arr[j] = c;
                j++;
            }
        }
        for (int i = 0; i < a; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}