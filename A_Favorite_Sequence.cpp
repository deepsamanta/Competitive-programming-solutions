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
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        ll k = a - 1;
        if (a % 2 == 0)
        {
            for (int i = 0; i < a / 2; i++)
            {
                cout << arr[i] << " " << arr[k] << " ";
                k--;
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < a / 2; i++)
            {
                cout << arr[i] << " " << arr[k]<<" ";
                k--;
            }
            cout << arr[k] << endl;
        }
    }
}