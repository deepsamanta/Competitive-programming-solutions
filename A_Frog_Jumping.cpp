#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        if (k % 2 == 0)
        {
            ll c = (a * (k / 2)) - (b * (k / 2));
            cout << c << endl;
        }
        else
        {
            ll c = (a * ((k / 2) + 1)) - (b * (k / 2));
            cout << c << endl;
        }
    }
}