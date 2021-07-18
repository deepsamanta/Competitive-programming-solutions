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
    ll b;
    cin >> b;
    ll arr1[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr1[i];
    }
    sort(arr1, arr1 + b);
    cout << arr[a - 1] << " " << arr1[b - 1] << endl;
}