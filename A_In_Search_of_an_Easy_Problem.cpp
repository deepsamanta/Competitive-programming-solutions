#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test, flag = 0;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        if (a == 1)
        {
            flag = 1;
            cout << "HARD" << endl;
            break;
        }
    }
    if (flag != 1)
    {
        cout << "EASY" << endl;
    }
}