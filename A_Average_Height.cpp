#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll even = 0, odd = 0;
        vll veven, vodd;
        for (int i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            if (b % 2 == 0)
            {
                veven.push_back(b);
                even++;
            }
            else
            {
                vodd.push_back(b);
                odd++;
            }
        }
        for (int i = 0; i < even; i++)
        {
            cout << veven[i] << " ";
        }
        for (int i = 0; i < odd; i++)
        {
            cout << vodd[i] << " ";
        }
        cout << endl;
    }
}