#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll counta = 0, countb = 0;
        while (a % 2 == 0)
        {
            a /= 2;
            counta++;
        }
        while (b % 2 == 0)
        {
            b /= 2;
            countb++;
        }
        if (c == 1)
        {
            cout << "YES" << endl;
        }
        else if (pow(2,counta)*pow(2,countb)>= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}