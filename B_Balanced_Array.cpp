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
        if (a % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= a / 2; i++)
            {
                cout << 2 * i << " ";
            }
            for (int i = 0; i < (a / 2) - 1; i++)
            {

                cout << ((2 * i) + 1) << " ";
            }
            cout << (a / 2) * 3 - 1 << endl;
            //cout << endl;
        }
    }
}