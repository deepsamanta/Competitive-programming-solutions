#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

// vector is important;

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (n == 1)
        {
            cout << "Yes" << endl;
        }
        else if ((n - 1) % b == 0)
        {
            cout << "Yes" << endl;
        }
        else if (a == 1 && (n - 1) % b != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            vll v;
            ll find = 1, i = 1;
            v.push_back(1);
            ll flag = 0;
            while (n > find)
            {
                find = pow(a, i++);
                v.push_back(find);
                if (find == n)
                {
                    cout << "Yes" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                ll x = 1;
                while (n >= v[x])
                {
                    ll j = v[x];
                    if ((n - j) % b == 0)
                    {
                        cout << "Yes" << endl;
                        flag = 1;
                        break;
                    }
                    x++;
                }
            }
            if (flag == 0)
            {
                cout << "No" << endl;
            }
        }
    }
}