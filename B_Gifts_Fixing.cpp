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
        ll arr1[a] = {0};
        ll arr2[a] = {0};
        ll mina=1e18, minb=1e18;
        for (int i = 0; i < a; i++)
        {
            cin >> arr1[i];
            mina = min(mina, arr1[i]);
        }
        for (int i = 0; i < a; i++)
        {
            cin >> arr2[i];
            minb = min(minb, arr2[i]);
        }

        ll sum = 0;

        for (int i = 0; i < a; i++)
        {
            sum += max(arr1[i] - mina, arr2[i] - minb);
        }
        cout << sum << endl;
    }
}