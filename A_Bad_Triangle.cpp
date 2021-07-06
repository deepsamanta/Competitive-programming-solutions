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
        ll sum = arr[0] + arr[1], flag = 0;
        for (int i = 2; i < a; i++)
        {
            if (sum <= arr[i])
            {
                cout << 1 << " " << 2 << " " << i + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }
}