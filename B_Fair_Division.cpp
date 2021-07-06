#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        //2 1 1 1 1
        ll a, sum_1 = 0, sum_2 = 0;
        cin >> a;
        while (a--)
        {
            ll b;
            cin >> b;
            if (b == 1)
            {
                sum_1++;
            }
            else
            {
                sum_2++;
            }
        }
        //  sum_1 % 2 == 0 && sum_2 % 2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
        if (sum_1 % 2 == 0 && sum_2 % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (sum_2 % 2 != 0 && sum_1 % 2 == 0 && sum_1 > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}