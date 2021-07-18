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
        ll count = 0, sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                arr[i] += 1;
                count++;
            }
            sum += arr[i];
        }
        if (sum == 0)
        {
            count += 1;
        }
        cout << count << endl;
    }
}