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
        ll sum_0 = 0, sum_1 = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0 && arr[i] % 2 != 0)
            {
                sum_0++;
            }
            else if (i % 2 == 1 && arr[i] % 2 != 1)
            {
                sum_1++;
            }
        }
        if (sum_0 == sum_1)
        {
            cout << sum_0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}