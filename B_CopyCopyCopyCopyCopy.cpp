#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{//// to find distinct we must use this............
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
        ll sum = 1;
        for (int i = 1; i < a; i++)
        {
            if (arr[i-1] != arr[i])
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
}