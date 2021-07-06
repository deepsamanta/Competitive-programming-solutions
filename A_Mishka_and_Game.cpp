#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    ll sum_M = 0, sum_C = 0;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
        {
            sum_M++;
        }
        else if (b > a)
        {
            sum_C++;
        }
    }
    if (sum_M > sum_C)
    {
        cout << "Mishka" << endl;
    }
    else if (sum_C > sum_M)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}