#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        ll mini_a = (p % a == 0) ? 0 : a - (p % a);
        ll mini_b = (p % b == 0) ? 0 : b - (p % b);
        ll mini_c = (p % c == 0) ? 0 : c - (p % c);
        cout << min(mini_a,min(mini_b,mini_c)) << endl;
    }
}