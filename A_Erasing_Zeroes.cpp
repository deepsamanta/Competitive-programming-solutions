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
        ll count = 0, length = 0, trigger, sum = 0;
        while (length < s.length())
        {
            if (s[length] == '0')
            {
                length++;
            }
            else
            {// increment the length here other wise the condition will not be satisfied and 
            // will form an infinite loop
                length++;
                for (int j = length; j < s.length(); j++)
                {
                    if (s[j] == '0')
                    {
                        sum++;
                        length = j;
                    }
                    else
                    {
                        count += sum;
                        sum = 0;
                        length = j;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
}