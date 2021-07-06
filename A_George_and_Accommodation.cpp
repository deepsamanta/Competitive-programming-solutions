#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test, sum = 0;
    cin >> test;
    while (test--)
    {
        ll peps, caps;
        cin >> peps >> caps;
        if (caps - peps >= 2)
        {
            sum++;
        }
    }
    cout << sum << endl;
}