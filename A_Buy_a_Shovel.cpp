#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    int i = 1;
    while (1)
    {
        if ((i * a) % 10 == 0)
        {
            cout << i << endl;
            break;
        }
        if ((i * a) % 10 != 0 && (i * a) % 10 == b)
        {
            cout << i << endl;
            break;
        }
        i++;
    }
}