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
        if (a == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            ll n = 2;
            while (n * n < a)
            {
                n++;
            }
            cout << n << endl;
        }
    }
}