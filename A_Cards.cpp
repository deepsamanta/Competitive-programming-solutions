#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    string s;
    cin >> s;
    ll arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    ll c = min(arr[13], min(arr[14], arr[4]));
    ll b = min(arr[25], min(arr[17], min(arr[14], arr[4])));
    for (int i = 1; i <= c; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 1; i <= b; i++)
    {
        cout << 0 << " ";
    }
    cout << endl;
}