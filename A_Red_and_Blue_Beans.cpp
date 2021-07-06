#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        long double d = min(a, b);
        long double e = max(a, b);
        ll f = ceil(e / d);
        if (f - 1 <= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}