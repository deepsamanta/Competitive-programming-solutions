#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] - 'a' == 0)
                {
                    s[i] = s[i] + 1;
                }
                else
                {
                    s[i] = 'a';
                }
            }
            else
            {
                if (s[i] - 'a' == 25)
                {
                    s[i] = s[i] - 1;
                }
                else
                {
                    s[i] = 'z';
                }
            }
        }
        cout << s << endl;
    }
}