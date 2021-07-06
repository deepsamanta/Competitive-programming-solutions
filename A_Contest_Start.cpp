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
        ll d = c / b;
        if (b > c)
        {
            cout << 0 << endl;
        }
        else if (a < d)
        {
            cout << ((a - 1) * (a)) / 2 << endl;
        }
        else
        {
            cout << d * a - ((d * (d + 1)) / 2) << endl;
        }
    }
}