#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    int i = 1;
    while (i <= a)
    {
        if (i != a && i % 2 != 0)
        {
            cout << "I hate that ";
        }
        else if (i != a && i % 2 == 0)
        {
            cout << "I love that ";
        }
        else if (i % 2 != 0)
        {
            cout << "I hate it ";
        }
        else
        {
            cout << "I love it ";
        }
        i++;
    }
}