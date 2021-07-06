#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;

    getline(cin, s);

    ll arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '}' || s[i] == ',')
        {
            continue;
        }
        ll a = s[i] - 'a';
        arr[a] = 1;
    }
    ll sum = 0;
    for (int i = 0; i < 26; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    //cout << s << endl;
  //  cout << s.length() << endl;
}