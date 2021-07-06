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
        ll arr[26] = {0};
        for (int i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < s.length(); j++)
            {
                arr[s[j] - 'a']++;
            }
        }
        // // ll sum = 0;
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << arr[i] << endl;
        // }
        ll flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                if (arr[i] % a == 0)
                {
                    continue;
                }
                else
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
}