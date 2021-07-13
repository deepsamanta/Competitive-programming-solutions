#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int fact(ll num)
{
    ll sum = 1;
    for (int i = 2; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll d = a - 1;
        ll e = b - 1;
        ll f = max(d, e);
        ll g = min(d, e) * max(a, b);
        ll h = f + g;
        if (h == c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}