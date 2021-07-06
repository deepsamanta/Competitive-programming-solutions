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
        ll e = b * 7;
        ll f = (a * c) + ((7 - a) * d);
        ll g = max(e, f);
        cout << g << endl;
    }
}