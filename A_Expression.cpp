#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll s1 = a * b * c;
    ll s2 = a * (b + c);
    ll s3 = a + (b * c);
    ll s4 = (a + b) * c;
    ll s5 = (a * b) + c;
    ll s6 = a + b + c;
    ll maxxx = max(s1, s2);
    maxxx = max(maxxx, s3);
    maxxx = max(maxxx, s4);
    maxxx = max(maxxx, s5);
    maxxx = max(maxxx, s6);
    cout << maxxx << endl;
}