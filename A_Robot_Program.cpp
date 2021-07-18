#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << a + b << endl;
        }
        else if (a + 1 == b || b + 1 == a)
        {
            cout << a + b << endl;
        }
        else if (a != 0 && b != 0)
        {
            ll c = min(a, b) + 1;
            ll d = max(a, b) - c;
            ll e = (d * 2) + (2 * c - 1);
            cout << e << endl;
        }
        else
        {
            ll f = max(a, b) * 2;
            cout << f - 1 << endl;
        }
    }
}