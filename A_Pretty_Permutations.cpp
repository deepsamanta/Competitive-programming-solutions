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
        for (int i = 1; i < a - 2; i = i + 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        if (a % 2 != 0)
        {
            cout << a << " " << a - 2 << " " << a - 1 << endl;
        }
        else
        {

            cout << a << " " << a - 1 << endl;
        }
    }
}