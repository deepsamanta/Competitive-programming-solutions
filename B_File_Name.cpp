#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main()
{
    ll a;
    cin >> a;
    string s;
    cin >> s;
    ll count = 0, counter = 1, j = 0;
    vll v;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == 'x' && s[i] == s[i - 1])
        {
            counter++;
        }
        else
        {
            v.push_back(counter);
            j++;
            counter = 1;
        }
    }
    v.push_back(counter);
    j++;
    ll sum = 0;
    // for (int i = 0; i < j; i++)
    // {
    //     cout << v[i] << endl;
    // }
    for (int i = 0; i < j; i++)
    {
        if (v[i] > 3)
        {
            sum += v[i] - 3 + 1;
        }
        else if (v[i] == 3)
        {
            sum += 1;
        }
    }
    cout << sum << endl;
}