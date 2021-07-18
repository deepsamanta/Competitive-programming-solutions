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
        ll arr[a];
        ll flag = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            stringstream ss;
            ss << (sqrt(arr[i]));
            string s;
            ss >> s;
            // cout << s << endl;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '.')
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}