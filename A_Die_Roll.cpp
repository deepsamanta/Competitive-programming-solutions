#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll c = max(a, b);
    c = 6 - c + 1;
    if (6 % c == 0)
    {
        cout << 1 << "/" << 6 / c << endl;
    }
    else
    {
        if (c % 2 == 0 && 6 % 2 == 0)
        {
            cout << c / 2 << "/" << 6 / 2 << endl;
        }
        else
        {
            cout << c << "/" << 6 << endl;
        }
    }
}