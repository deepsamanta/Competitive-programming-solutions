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
    ll b = a / 2;
    ll sum = 0, newsum = 0;
    ll f = 0, l = a - 1;
    while (b--)
    {
        sum += max(arr[f], arr[l]);

        if (arr[f] >= arr[l])
        {
            f++;
        }
        else
        {
            l--;
        }

        newsum += max(arr[f], arr[l]);
        if (arr[f] >= arr[l])
        {
            f++;
        }
        else
        {
            l--;
        }
    }
   // cout << f << " " << l << endl;
    if (a % 2 != 0)
    {
        sum += arr[l];
    }
    cout << sum << " " << newsum << endl;
}