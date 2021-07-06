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
        a % 4 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
}