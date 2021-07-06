#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    ll arr[test];
    for (int i = 0; i < test; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + test);
    ll sum = 0;
    for (int i = 0; i < test - 1; i++)
    {
        sum += arr[test - 1] - arr[i];
    }
    cout << sum << endl;
}