#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, flag = 0;
        cin >> a >> b;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] > b)
            {
                flag = 1;
            }
        }
        sort(arr, arr + a);
        ll c = arr[0] + arr[1];
        if (flag == 1)
        {
            c <= b ? cout << "YES" << endl : cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}