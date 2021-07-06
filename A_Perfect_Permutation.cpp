#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    if (a % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 1; i < a - 2; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        if (a % 2 == 0)
        {
            cout << a << " " << a - 1;
        }
    }
}