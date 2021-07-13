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
        string s;
        cin >> s;
        string s1 = "2020";
        string s2;

        ll num = 0;
        for (int i = 0; i < 4; i++)
        {
            if (s[i] == s1[i])
            {
                s2 += s[i];
            }
            else
            {
                num = i;
                break;
            }
        }
        if (s2 == s1)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll j = num;

            for (int i = a - 4 + num; i < a; i++)
            {
                if (s[i] == s1[j])
                {
                    s2 += s[i];
                    j++;
                }
                else
                {
                    num = i;
                    break;
                }
            }
            if (s2 == s1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}