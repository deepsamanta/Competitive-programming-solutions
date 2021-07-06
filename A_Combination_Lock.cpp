#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    string s, s1;
    cin >> s >> s1;
    ll sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ll d = s[i] - '0';
        ll e = '9' - s1[i];
        ll f = abs(s[i] - s1[i]);
        ll g = 9 - (s[i] - '0') + s1[i] - '0'+1;
        //sum += min(e + ('z' - s[i]) + 1, min(abs(d - e), abs(25 - e) + d + 1));
        sum += min((d + e + 1), min(f, g));
      //  cout << sum << " ";
    }
    cout << sum << endl;
}