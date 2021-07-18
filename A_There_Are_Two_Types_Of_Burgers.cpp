#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll buns, patty, cutlets, h_price, c_price;
        cin >> buns >> patty >> cutlets >> h_price >> c_price;
        buns /= 2;
        ll total_profit = 0;
        if (h_price >= c_price)
        {
            total_profit += min(patty, buns) * h_price;
            buns -= min(patty, buns);
            total_profit += min(buns, cutlets) * c_price;
            cout << total_profit << endl;
        }
        else
        {
            total_profit += min(cutlets, buns) * c_price;
            buns -= min(cutlets, buns);
            total_profit += min(buns, patty) * h_price;
            cout << total_profit << endl;
        }
    }
}