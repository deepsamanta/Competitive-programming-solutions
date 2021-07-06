#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll num, sum = 0;
    cin >> num;
    ll arr[num + 1] = {0};
    ll x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        ll a;
        cin >> a;
        arr[a] = 1;
    }
    ll y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        ll a;
        cin >> a;
        arr[a] = 1;
    }
    for (int i = 1; i <= num; i++)
    {
        sum += arr[i];
        //cout << arr[i] << endl;
    }
    if (sum < num)
    {
        cout << "Oh, my keyboard!" << endl;
    }
    else if (num == sum)
    {
        cout << "I become the guy." << endl;
    }
}