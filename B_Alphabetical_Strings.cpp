#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        string ans = "YES";
        string s;
        cin >> s;
        ll a = s.size();
        vector<bool> set(26, 0);
        for (char c : s)
        {
            set[c - 'a'] = 1;
        }
        for (int i = 1; i < a - 1; i++)
        {
            if (s[i] > s[i + 1] && s[i] > s[i - 1])
            {
                ans = "NO";
            }
        }
        for (int i = 0; i < a; i++)
        {
            if (set[i] != 1)
            {
                ans = "NO";
            }
        }

        cout << ans << endl;
    }
}
