#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    ll sum = 1;
    cin >> a;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
}