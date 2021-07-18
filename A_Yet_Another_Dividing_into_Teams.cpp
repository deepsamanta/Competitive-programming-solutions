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
        sort(arr, arr + a);
        ll count = 0;
        for (int i = 1; i < a; i++)
        {
            if (arr[i] - arr[i - 1] == 1)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}