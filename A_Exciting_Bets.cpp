#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, moves = 0, game = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            ll maxi = max(a, b);
            ll mini = min(a, b);
            game = maxi - mini;
            moves = min(game - (mini % game), mini % game);
            cout << game << " " << moves << endl;
        }
    }
}