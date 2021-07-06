#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, sum_A = 0, sum_D = 0;
    cin >> a;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            sum_A++;
        }
        else
        {
            sum_D++;
        }
    }
    if (sum_A == sum_D)
    {
        cout << "Friendship" << endl;
    }
    else if (sum_A > sum_D)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
}