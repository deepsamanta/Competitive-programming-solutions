#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    string s;
    cin >> s;
    for (int i = 2; (i * (i - 1)) / 2 <= a; i++)
    {
        ll c = (i * (i - 1)) / 2;
        cout << s[c - 1];
    }
    cout << endl;
}