#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1)
        {
            cout << 0 << endl;
        }
        else if (a == 2)
        {
            cout << b << endl;
        }
        else
        {
            cout << 2 * b << endl;
        }
    }
}
