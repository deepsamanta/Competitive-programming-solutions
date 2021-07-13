#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll d = min(a, b);
    ll e = a + b;
    ll f = min(e, c);
    ll g = (d + f)+min(max(a,b),d+c);
    cout << g << endl;
}