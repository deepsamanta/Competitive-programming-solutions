#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        if (b <= a / 2)
        {
            cout << (2 * (b - 1)) + 1 << endl;
        }
        else
        {
            cout << (b - a / 2) * 2 << endl;
        }
    }
    else
    {
        if (b <= (a + 1) / 2)
        {
            cout << (2 * (b - 1)) + 1 << endl;
        }
        else
        {
            cout << (b - (a + 1) / 2) * 2;
        }
    }
}