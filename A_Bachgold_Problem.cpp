#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    if (a % 2 == 0)
    {
        ll d = a / 2;
        cout << d << endl;
        for (int i = 0; i < d; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        ll d = a / 2 - 1;
        cout << d + 1 << endl;
        for (int i = 0; i < d; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
}