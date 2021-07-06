#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll sum_odd = 0, sum_even = 0;
        ll a;
        cin >> a;
        for (int i = 0; i < 2 * a; i++)
        {
            ll b;
            cin >> b;
            if (b % 2 == 0)
            {
                sum_even++;
            }
            else
            {
                sum_odd++;
            }
        }
        if (sum_even == sum_odd)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}