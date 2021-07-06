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
        if (a == 1 || a == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (a - 1) / 2 + 1 << endl;
        }
    }
}