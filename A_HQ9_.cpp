#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    ll flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        cout << "NO" << endl;
    }
}