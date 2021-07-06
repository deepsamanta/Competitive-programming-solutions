#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        if (2 * min(a, b) >= max(a, b))
        {
            cout << pow(2 * min(a, b), 2) << endl;
        }
        else if (a == b)
        {
            cout << pow(2 * a, 2) << endl;
        }
        
        else
        {
            cout << pow(max(a, b), 2) << endl;
        }
    }
}