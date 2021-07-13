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
        ll sum_a = 0, sum_b = 0;
        for (int i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            if (b == 1 || b == 3)
            {
                sum_a++;
            }
            else if (b == 2)
            {
                sum_b++;
            }
        }
        cout << sum_a << endl;
    }
}