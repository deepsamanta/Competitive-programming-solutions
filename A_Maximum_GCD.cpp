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
        if (a % 2 == 0)
        {
            cout << a / 2 << endl;
        }
        
        else
        {
            cout << (a - 1) / 2 << endl;
        }
    }
}