#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << 4 << " " << a - 4;
    }
    else
    {
        cout << 9 << " " << a - 9;
    }
}