#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll e = min(a, min(c, d));
    ll f = min(a - e, b);
    ll g = (e * 256) + (f * 32);
    cout << g << endl;
}