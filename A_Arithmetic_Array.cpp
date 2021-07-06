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
        long double sum = 0;
        cin >> a;
        ll c=a;
        while (c--)
        {
            ll b;
            // cout << b << endl;
            cin >> b;
            sum += b;
            // cout << sum << endl;
        }
        float f = sum / a;
        if (f == 1)
        {
            cout << 0 << endl;
        }
        else if (f > 1)
        {
            cout << sum - a << endl;
        }
        else if (f < 1)
        {
            cout << 1 << endl;
        }
    }
}