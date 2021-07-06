#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test, sum = 0;
    cin >> test;
    string s1;
    for (int i = 0; i < test; i++)
    {
        string s;
        cin >> s;
        if (s[1] == s1[0] || i == 0)
        {
            sum++;
        }
        s1 = s;
    }
    cout << sum << endl;
}