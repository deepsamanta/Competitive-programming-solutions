#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef set<ll> sll;
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
        sort(arr, arr + a);
        sll s;
        for (int i = 0; i < a; i++)
        {
            if (i == 0)
            {
                s.insert(arr[i]);
            }
            else
            {
                if (arr[i] == arr[i - 1] || arr[i] + 1 == arr[i - 1])
                {
                    arr[i] += 1;
                }
                s.insert(arr[i]);
            }
        }

        cout << s.size() << endl;
    }
}