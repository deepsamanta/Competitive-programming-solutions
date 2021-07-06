#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // a+b, a+c, b+c and a+b+c.
    ll arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i];
    // }
    // cout << endl;
    ll a = arr[0] + arr[1];
    //cout << a << endl;
    a = a - arr[3];
    ll b = arr[0] + arr[2];
    // cout << b << endl;
    b = b - arr[3];
    cout << a << " " << b << " " << arr[3] - (b + a) << endl;
}