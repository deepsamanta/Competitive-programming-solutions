#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    long double sum = 0;
    for (int i = 0; i < test; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    cout << fixed << setprecision(12) << sum / test << endl;
}