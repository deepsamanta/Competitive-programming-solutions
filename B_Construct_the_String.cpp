#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll arr[26] = {0};
        string s;

        if (a == 1)
        {
            int p = 0;
            while (1)
            {
                if (s.length() < n)
                {
                    s += 'a' + (p % 26);
                    if (s.length() == n)
                    {
                        break;
                    }
                }
                p++;
            }
        }
        else
        {
            for (int i = 0; i <= n - a; i++)
            {
                if (i == 0)
                {
                    for (int j = 0; j < 26; j++)
                    {
                        if (arr[j] == 0)
                        {
                            if (s.length() <= b)
                            {
                                s += 'a' + j;
                                arr[j] = 1;
                                if (s.length() == b)
                                {
                                    break;
                                }
                            }
                        }
                    }

                    for (int j = 0; j < a - b; j++)
                    {
                        s += 'a';
                    }
                }
                else
                {
                    ll newarr[26] = {0}, sum = 0;
                    //  cout << sum << endl;
                    for (int k = i; k < s.length(); k++)
                    {
                        newarr[s[k] - 'a'] = 1;
                    }
                    for (int k = 0; k < 26; k++)
                    {
                        sum += newarr[k];
                    }
                    // cout << s << endl;
                    //   cout << sum << endl;
                    if (sum < b)
                    {
                        for (int j = 0; j < 26; j++)
                        {
                            if (newarr[j] == 0)
                            {
                                s += 'a' + j;
                                newarr[j] = 1;
                                break;
                            }
                        }
                    }
                    else
                    {
                        s += 'a';
                    }
                }
            }
        }

        cout << s << endl;
    }
}