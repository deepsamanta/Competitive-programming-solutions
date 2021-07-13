#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll sum = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (i * i + j == a && i + j * j == b)
            {
                sum++;
            }
            else if (i * i > a || j * j > b)
            {
                break;
            }
        }
    }
    cout << sum << endl;
}