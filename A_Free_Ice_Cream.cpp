#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    string s;
    ll num, count = 0;
    while (a--)
    {
        cin >> s;
        cin >> num;
        if (s[0] == '+')
        {
            b += num;
        }
        else if (s[0] == '-' && b - num >= 0)
        {
            b -= num;
        }
        else
        {
            count++;
        }
    }
    cout << b << " " << count << endl;
}