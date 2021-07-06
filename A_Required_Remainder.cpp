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
        if (a * floor(c / a) + b > c)
        {

            ll e = a * (floor(c / a) - 1) + b;
            cout << e << endl;
        }
        else
        {
            ll d = a * floor(c / a) + b;
            cout << d << endl;
        }
    }
}