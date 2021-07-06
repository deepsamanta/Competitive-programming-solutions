#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll flag = 0, c = 0;
    for (int i = a + 1; i <= b; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            c = i;
            break;
        }
    }
    if (flag == 0 && c == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}