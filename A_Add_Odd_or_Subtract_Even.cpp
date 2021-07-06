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
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (b > a)
        {
            if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            if (a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}