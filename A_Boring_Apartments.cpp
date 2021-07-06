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
        ll a = s.length();
        ll b = s[0] - '0';
        switch (b)
        {
        case 1:
            cout << (a * (a + 1)) / 2 << endl;
            break;
        case 2:
            cout << ((a * (a + 1)) / 2) + 10 << endl;
            break;
        case 3:
            cout << ((a * (a + 1)) / 2) + 2 * 10 << endl;
            break;
        case 4:
            cout << ((a * (a + 1)) / 2) + 3 * 10 << endl;
            break;
        case 5:
            cout << ((a * (a + 1)) / 2) + 4 * 10 << endl;
            break;
        case 6:
            cout << ((a * (a + 1)) / 2) + 5 * 10 << endl;
            break;
        case 7:
            cout << ((a * (a + 1)) / 2) + 6 * 10 << endl;
            break;
        case 8:
            cout << ((a * (a + 1)) / 2) + 7 * 10 << endl;
            break;
        case 9:
            cout << ((a * (a + 1)) / 2) + 8 * 10 << endl;
            break;
        }
    }
}