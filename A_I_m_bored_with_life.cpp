#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int fact(int a)
{
    ll sum = 1;
    for (int i = a; i > 1; i--)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    if (a > 12 || b > 12)
    {
        ll c = fact(min(a, b));
        cout << c << endl;
    }
    else
    {
        ll k = fact(a);
        ll d = fact(b);
        ll e = __gcd(k, d);
        cout << e << endl;
    }
}