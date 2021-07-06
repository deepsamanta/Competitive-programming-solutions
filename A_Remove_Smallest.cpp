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
        ll flag = 0;
        if (a == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < a - 1; i++)
            {
                if (arr[i + 1] - arr[i] == 1 || arr[i + 1] - arr[i] == 0)
                {
                    continue;
                }
                else
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
        }
    }
}