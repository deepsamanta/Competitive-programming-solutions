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
        if (a == 2 || a == 1)
        {
            cout << 4 - a << endl;
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
}