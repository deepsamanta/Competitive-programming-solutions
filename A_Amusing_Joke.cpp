#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s, s1, s2;
    ll flag = 0;
    cin >> s >> s1 >> s2;
    ll arr1[26] = {0}, arr2[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr1[s[i] - 'A']++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        arr1[s1[i] - 'A']++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        arr2[s2[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        //  cout << arr1[i] << " " << arr2[i];
        if (arr2[i] != arr1[i])
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        cout << "YES" << endl;
    }
}