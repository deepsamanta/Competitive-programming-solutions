#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //     'C' (cyan)
    // 'M' (magenta)
    // 'Y' (yellow)
    // 'W' (white)
    // 'G' (grey)
    // 'B' (black)
    ll a, b;
    cin >> a >> b;
    ll b_ = 0, c_ = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            char c;
            cin >> c;
            if (c == 'W' || c == 'B' || c == 'G')
            {
                b_++;
            }
            else
            {
                c_++;
            }
        }
    }
    if (c_ == 0)
    {
        cout << "#Black&White" << endl;
    }
    else
    {
        cout << "#Color" << endl;
    }
}