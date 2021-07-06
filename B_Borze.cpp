#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // .=0 || -. || --
    string s;
    cin >> s;
    ll a = 0;
    while (a < s.length())
    {
        if (s[a] == '.')
        {
            cout << 0;
            a++;
        }
        else if (s[a] == '-' && s[a + 1] == '.')
        {
            cout << 1;
            a += 2;
        }
        else if (s[a] == '-' && s[a + 1] == '-')
        {
            cout << 2;
            a += 2;
        }
    }
}