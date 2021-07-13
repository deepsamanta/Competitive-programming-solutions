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
        if (a % 2050 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            stringstream ss;
            ss << a / 2050;
            string s;
            ss >> s;
            ll sum = 0;
            for (int i = 0; i < s.length(); i++)
            {
                sum += s[i] - '0';
            }
            cout << sum << endl;
        }
    }
}