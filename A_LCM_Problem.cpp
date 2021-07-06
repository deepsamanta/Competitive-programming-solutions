#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, flag = 0;
        cin >> a >> b;
        ll c = __gcd(a, a * 2);
        ll d = (a * (a * 2)) / c;
        if (d >= a && d <= b)
        {
            cout << a << " " << a * 2 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
}