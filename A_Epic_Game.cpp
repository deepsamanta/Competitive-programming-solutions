#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll i = 1;
    while (c > 0)
    {
        if (i % 2 != 0)
        {
            c -= __gcd(a, c);
            i++;
        }
        else
        {
            c -= __gcd(b, c);
            i++;
        }
    }
    if (i % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}