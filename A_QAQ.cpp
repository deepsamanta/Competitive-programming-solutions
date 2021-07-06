#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    ll count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'Q')
        {
            for (int j = i + 1; j < s.length(); j++)
                if (s[j] == 'A')
                {
                    for (int k = j + 1; k < s.length(); k++)
                    {
                        if (s[k] == 'Q')
                        {
                            count++;
                        }
                    }
                }
        }
    }
    cout << count << endl;
}