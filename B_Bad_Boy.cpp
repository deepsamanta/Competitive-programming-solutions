#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //     7
    // 2 3 1 1
    // 4 4 1 2
    // 3 5 2 2
    // 5 1 2 1
    // 3 1 3 1
    // 1 1 1 1
    // 1000000000 1000000000 1000000000 50

    //     1 2 2 3
    // 4 1 4 4
    // 3 1 1 5
    // 5 1 1 1
    // 1 1 2 1
    // 1 1 1 1
    // 50 1 1 1000000000

    ll test;
    cin >> test;
    while (test--)
    {
        ll m, n, i, j;
        cin >> m >> n >> i >> j;
        if ((i <= m / 2 && j <= n / 2) || (i > m / 2 && j > n / 2))
        {
            cout << 1 << " " << n << " " << m << " " << 1 << endl;
        }
        else
        {
            cout << 1 << " " << 1 << " " << m << " " << n << endl;
        }
    }
}