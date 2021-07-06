#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    ll sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ll a = s[i] - '0';
        switch (a)
        {
        case 1:
            sum += arr[0];
            break;

        case 2:
            sum += arr[1];
            break;
        case 3:
            sum += arr[2];
            break;
        case 4:
            sum += arr[3];
            break;
        }
    }
    cout << sum << endl;
}