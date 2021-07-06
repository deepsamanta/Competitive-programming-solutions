#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, mini = 1000;
    cin >> a >> b;
    ll arr[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + b);
    for (int i = 0; i <= b - a; i++)
    {
        ll s = arr[a + i - 1] - arr[0 + i];
        if (s < mini)
        {
            mini = s;
        }
    }
    cout << mini << endl;
}