#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    ll index = 0;
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
        ll flag = 0;
        for (int i = 0; i < a - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                index = i + 1;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll winners = a - index;
            cout << winners << endl;
        }
    }
}