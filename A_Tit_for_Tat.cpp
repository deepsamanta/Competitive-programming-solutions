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
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        ll c = 0, e = a - 1;
        for (int i = 0; i < b; i++)
        {
            if (arr[c] == 0)
            {
                for (int j = 0; j <= a - 2; j++)
                {
                    if (arr[j] != 0)
                    {
                        c = j;
                        break;
                    }
                }
            }
            if (arr[c] > 0)
            {
                arr[c] -= 1;
                arr[e] += 1;
            }
        }
        for (int i = 0; i < a; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}