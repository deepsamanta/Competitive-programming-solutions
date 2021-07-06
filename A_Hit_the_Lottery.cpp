#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //1 , 5, 10, 20, 100.
    ll money, num = 0;
    cin >> money;
    if (money >= 100)
    {
        num += money / 100;
        money = money % 100;
    }
    if (money >= 20)
    {
        num += money / 20;
        money = money % 20;
    }
    if (money >= 10)
    {
        num += money / 10;
        money = money % 10;
    }
    if (money >= 5)
    {
        num += money / 5;
        money = money % 5;
    }
    if (money >= 1)
    {
        num += money / 1;
        money = money % 1;
    }
    cout << num << endl;
}