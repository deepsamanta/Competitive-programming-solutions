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
        ll sum = 0;
        ll num_1 = 1;
        for (int i = 1; i <= 10; i++)
        {
            if (num_1 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_1 = num_1 * 10 + 1;
        }
        ll num_2 = 2;
        for (int i = 1; i <= 10; i++)
        {
            if (num_2 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_2 = num_2 * 10 + 2;
        }
        ll num_3 = 3;
        for (int i = 1; i <= 10; i++)
        {
            if (num_3 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_3 = num_3 * 10 + 3;
        }
        ll num_4 = 4;
        for (int i = 1; i <= 10; i++)
        {
            if (num_4 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_4 = num_4 * 10 + 4;
        }
        ll num_5 = 5;
        for (int i = 1; i <= 10; i++)
        {
            if (num_5 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_5 = num_5 * 10 + 5;
        }
        ll num_6 = 6;
        for (int i = 1; i <= 10; i++)
        {
            if (num_6 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_6 = num_6 * 10 + 6;
        }
        ll num_7 = 7;
        for (int i = 1; i <= 10; i++)
        {
            if (num_7 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_7 = num_7 * 10 + 7;
        }
        ll num_8 = 8;
        for (int i = 1; i <= 10; i++)
        {
            if (num_8 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_8 = num_8 * 10 + 8;
        }
        ll num_9 = 9;
        for (int i = 1; i <= 10; i++)
        {
            if (num_9 <= a)
            {
                sum++;
            }
            else
            {
                break;
            }
            num_9 = num_9 * 10 + 9;
        }
        cout << sum << endl;
    }
}