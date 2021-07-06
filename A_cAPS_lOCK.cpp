#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //     either it only contains uppercase letters;
    // or all letters except for the first one are uppercase.
    string s, s1;
    cin >> s;
    ll flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int a = bool(isupper(s[i]));
        if (i == 0)
        {
            if (a == 1)
            {
                s1 += tolower(s[i]);
            }
            else
            {
                s1 += toupper(s[i]);
            }

            // cout << s1 << endl;
        }
        else
        {
            if (a != 1)
            {
                flag = 1;
                break;
            }
            else
            {
                s1 += tolower(s[i]);
            }
        }
    }
    if (flag == 1)
    {
        cout << s << endl;
    }
    else
    {
        cout << s1 << endl;
    }
}