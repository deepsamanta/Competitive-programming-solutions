#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    if (a % 2 == 0)
    {
        ll b = a / 2;
        cout << b * (b + 1) - (b * b) << endl;
    }
    else
    {
        ll b = a / 2;
        cout << b * (b + 1) - ((b + 1) * (b + 1)) << endl;
    }
}