#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    ll counter = 0;
    while (counter == 0)
    {
        ll sum = 0;
        stringstream ss;
        ss << a;
        string s;
        ss >> s;
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i] - '0';
        }
        if (sum % 4 == 0)
        {
            counter = 1;
        }
        a++;
    }
    cout << a - 1 << endl;
}