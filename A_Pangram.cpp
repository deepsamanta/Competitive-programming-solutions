#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, sum = 0;
    cin >> a;
    string s;
    cin >> s;
    ll arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        arr[s[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        sum += arr[i];
    }
    if (sum == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}