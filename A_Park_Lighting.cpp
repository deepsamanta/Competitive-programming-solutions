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
        ll d = ceil((a * b) / 2);
        cout << d << endl;
    }
}