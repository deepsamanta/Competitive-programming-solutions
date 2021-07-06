#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        long double a, b;
        cin >> a >> b;
        if (a == 1 || a == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 1 + ceil((a - 2) / b) << endl;
        }
    }
}