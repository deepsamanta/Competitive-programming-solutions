#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    ll arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    ll sum = 0;
    for (int i = 0; i < a; i += 2)
    {
        sum += arr[i + 1] - arr[i];
    }
    cout << sum << endl;
}