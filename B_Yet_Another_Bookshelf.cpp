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
        ll arr[a];

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        ll count = 0;
        for (int i = 0; i < a; i++)
        {
            ll flag = 0;
            if (arr[i] == 1)
            {
                for (int j = i + 1; j < a; j++)
                {
                    if (arr[j] == 0)
                    {
                        count++;
                    }
                    if (arr[j] == 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    count -= (a - 1) - (i);
                }
            }
        }
        cout << count << endl;
    }
}