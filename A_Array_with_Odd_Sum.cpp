#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, sum_odd = 0, sum_even = 0;
        cin >> a;
        while (a--)
        {
            ll b;
            cin >> b;
            if (b % 2 != 0)
            {
                sum_odd++;
            }
            else
            {
                sum_even++;
            }
        }
        // cout << sum << endl;
        if (sum_odd >= 1 && sum_even >= 1)
        {
            cout << "YES" << endl;
        }
        else if (sum_odd % 2 != 0 && sum_even == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}