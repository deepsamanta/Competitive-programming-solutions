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
        string s, s1;
        cin >> s >> s1;
        ll count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s1[i])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll newcount = 0;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] != s1[i])
                {
                   // cout << s << " " << s1 << endl;
                    if (s[i] == '0')
                    {
                        s[i] = '1';
                    }
                    else
                    {
                        s[i] = '0';
                    }
                    if (s[i + 1] == '0')
                    {
                        s[i + 1] = '1';
                    }
                    else
                    {
                        s[i + 1] = '0';
                    }
                    newcount++;
                }

                if (s == s1)
                {
                    break;
                }
            }
            cout << newcount << endl;
        }
    }
}