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
        ll e = d + c;
        ll f = b - a;
        if (f % e == 0)
        {
            ll g = f / e;
            cout << g << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}