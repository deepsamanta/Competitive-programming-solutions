#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    ll count=0;
    if (k == 1 || m == 1 || n == 1 || l == 1)
    {
        cout << d;
    }
    else
    {
        for (int i = 1; i <= d; i++)
        {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}