#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll maxi = max(max(a, b), c);
        ll newn = (n - ((maxi - a) + (maxi - b) + (maxi - c)));
       // cout << newn << endl;
        if (newn % 3 == 0 && newn >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
