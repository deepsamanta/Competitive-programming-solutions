#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll e = max(a, b);
        ll f = min(a, b);
        ll g = max(c, d);
        ll h = min(c, d);
        if (min(e, g) < f || min(e, g) < h)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}