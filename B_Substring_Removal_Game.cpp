#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        ll arr[s.length()];
        ll j = 0;
        ll count = 0;
        if (s[0] == '1')
        {
            count++;
        }
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                count++;
            }
            else if (s[i] == '1' && s[i + 1] == '1')
            {
                count++;
            }
            else
            {
                arr[j] = count;
                j++;
                count = 0;
            }
        }
        arr[j] = count;
        j++;
        sort(arr, arr + j);
        ll alice = 0;
        for (int i = j - 1; i >= 0; i -= 2)
        {
            alice += arr[i];
            // cout << arr[i] << endl;
        }
        cout << alice << endl;
    }
}