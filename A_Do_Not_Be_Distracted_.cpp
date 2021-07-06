#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        string s;
        cin >> s;
        ll arr[26] = {0};
        for (int i = 0; i < a; i++)
        {
            if (i > 0)
            {
                if (s[i-1] != s[i])
                {
                    arr[s[i] - 'A']++;
                }
            }
            else
            {
                arr[s[i] - 'A']++;
            }
        }
        ll flag = 0;
        for (int i = 0; i < 26; i++)
        {
           // cout << arr[i] << endl;
            if (arr[i] > 1)
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
}