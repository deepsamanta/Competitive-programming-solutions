#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s, s1;
    cin >> s;
    ll flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {

            i += 2;
            if (flag == 0)
            {
                s1 += ' ';
                flag = 1;
            }
        }
        else
        {
            s1 += s[i];
            flag = 0;
        }
    }
    cout << s1 << endl;
}