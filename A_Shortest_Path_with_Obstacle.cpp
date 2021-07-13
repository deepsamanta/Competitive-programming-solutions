#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll xa, ya, xb, yb, xf, yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;

        if (xa == xb && xb == xf)
        {
            if (yf > ya && yf < yb || yf > yb && yf < ya)
            {
                ll c = abs(xb - xa) + abs(yb - ya);
                cout << c + 2 << endl;
            }
            else
            {
                ll c = abs(xb - xa) + abs(yb - ya);
                cout << c << endl;
            }
        }
        else if (ya == yb && yb == yf)
        {
            if (xf > xa && xf < xb || xf > xb && xf < xa)
            {
                ll c = abs(xb - xa) + abs(yb - ya);
                cout << c + 2 << endl;
            }
            else
            {
                ll c = abs(xb - xa) + abs(yb - ya);
                cout << c << endl;
            }
        }
        else
        {
            ll c = abs(xb - xa) + abs(yb - ya);
            cout << c << endl;
        }
    }
}