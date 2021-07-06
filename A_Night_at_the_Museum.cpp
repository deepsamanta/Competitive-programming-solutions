#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    ll sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            sum += min((s[i] - 'a'), ('z' - s[i]) + 1);
            //cout << sum << endl;
        }
        else
        {
            // min(a, min(b, c));
            // cout << 'z' - 'a' << endl;
            //  sum += min(abs((s[i] - s[i - 1])), abs((s[i] - 'a') + ('z' - s[i]) + 1));
            // cout << sum << endl;
            ll d = s[i] - 'a';
            ll e = s[i - 1] - 'a';
            sum += min(e + ('z' - s[i]) + 1, min(abs(d - e), abs(25 - e) + d + 1));
           // cout << sum << endl;
            //  sum += s[i] - s[i - 1]
        }
    }
    cout << sum << endl;
}