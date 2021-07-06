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
        ll mina = 1e18;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        for (int i = 0; i < a; i++)
        {
            if (i > 0)
            {
                mina = min(mina, max(arr[i], arr[i - 1]) - min(arr[i], arr[i - 1]));
            }
        }
        cout << mina << endl;
    }
}