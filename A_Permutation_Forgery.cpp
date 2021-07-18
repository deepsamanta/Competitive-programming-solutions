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

        for (int i = a - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}