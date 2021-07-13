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
        ll sum = 0, pos = 0;
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            arr[i] = arr[i] - b;
            sum += arr[i];
            pos += abs(arr[i]);
        }
        pos = pos / 2;
        if (sum != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << pos << endl;
            while (pos--)
            {
                for (int i = 0; i < a; i++)
                {
                    if (arr[i] > 0)
                    {
                        cout << i + 1 << " ";
                        arr[i]--;
                        break;
                    }
                }
                for (int i = 0; i < a; i++)
                {
                    if (arr[i] < 0)
                    {
                        cout << i + 1 << " ";
                        arr[i]++;
                        break;
                    }
                }
                cout << endl;
            }
        }
    }
}