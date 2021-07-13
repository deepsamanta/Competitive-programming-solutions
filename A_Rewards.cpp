#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long double a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    ll sum_cups = ceil((a + b + c) / 5);
    ll sum_medals = ceil((d + e + f) / 10);
    (sum_cups + sum_medals <= g) ? cout << "YES" << endl : cout << "NO" << endl;
}