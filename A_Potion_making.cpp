#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll b = 100 - a;
        ll c = __gcd(a, b);
       // cout << c << endl;
        ll d = a / c;
        ll e = b / c;
        cout << d + e << endl;
    }
}
