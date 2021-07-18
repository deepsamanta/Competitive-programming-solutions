#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    ll arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    ll maxi = 0, count = 1;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            maxi = max(count, maxi);
            count = 1;
        }
    }
    maxi = max(count, maxi);
    cout << maxi << endl;
}