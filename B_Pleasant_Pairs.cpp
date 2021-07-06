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
        ll radio[2 * a + 1];
        ll arr[a];

        for (int i = 0; i < 2 * a; i++)
        {
            radio[i] = 1e9;
        }
        for (int j = 0; j < a; j++)
        {
            cin >> arr[j];
            radio[arr[j]] = j + 1;
        }

        for (int i = 1; i < 2 * a; i++)
        {

            for (int j = 1; j <= sqrt(i); j++)
            {
                
                if (i % j == 0 && i != j * j)
                {

                    if (radio[j] + radio[i / j] == i)
                    {
                        sum++;
                    }
                }
            }
        }
        cout << sum << endl;
    }
}