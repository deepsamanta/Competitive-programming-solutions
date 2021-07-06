#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   // if a sum of gcd and lcm is there and you are asked to find the pair for which the sum
    // exists then just write the pair 1 << sum-1;
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        cout << 1 << " " << a - 1 << endl;
    }
}