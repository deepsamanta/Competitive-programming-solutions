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
        long double sum = 0;
        for (int i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            sum += b;
        }
        ll d = ceil(sum / a);
        cout << d << endl;
    }
}