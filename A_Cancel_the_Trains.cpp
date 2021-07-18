#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        ll arr[101] = {0};
        for (int i = 0; i < a + b; i++)
        {
            ll c;
            cin >> c;
            arr[c]++;
        }
        ll count = 0;
        for (int i = 0; i < 101; i++)
        {
            if (arr[i] > 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}