// Fake Taxi 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test, newsum = 1;
    long double sum = 0;
    cin >> test;
    ll arr[5] = {0};
    for (int i = 0; i < test; i++)
    {
        ll a;
        cin >> a;
        arr[a]++;
    }
    // for (int i = 1; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    sum = 2 * arr[2];
    if (arr[3] >= arr[1])
    {
        cout << arr[3] + ceil(sum / 4) + arr[4];
    }
    else
    {
        ll b = min(arr[3], arr[1]);
        sum = sum + arr[1] - b;
        //   cout << sum << endl;
        cout << b + ceil(sum / 4) + arr[4];
    }
}