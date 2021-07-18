#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        vll v;
        ll count = 0;
        for (int i = 0; i < a; i++)
        {
            if (i == 0)
            {
                cout << arr[i] << " ";
            }
            else
            {
                if (arr[i] == arr[i - 1])
                {
                    v.push_back(arr[i]);
                    count++;
                }
                else
                {
                    cout << arr[i] << " ";
                }
            }
        }
        for (int i = 0; i < count; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}