#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll arr[4], sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    for (int i = 0; i < 4 - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            sum++;
        }
    }
    cout << sum;
}