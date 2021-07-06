#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll sum_2 = 0, sum_3 = 0;
        while (a % 2 == 0)
        {
            a /= 2;
            sum_2++;
        }
        while (a % 3 == 0)
        {
            a /= 3;
            sum_3++;
        }
        if (a == 1)
        {
            /// here sum_2 is the min and the sum_3-sum_2 is done because to make a excess three 
            // we need 2 chances to make it 6 and after that to make it 1
            // 3*2=6  this is first chances
            // 6/6=1 to make it one
            
            if (sum_2 <= sum_3)
            {
                cout << sum_2+(sum_3-sum_2)*2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}