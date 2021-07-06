#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    ll arr[a] = {0};
    ll count = 1;
    ll sum = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j < a; j++)
    {
        if (arr[j] <= arr[j - 1])
        {
            sum = max(sum, count);
            count = 1;
        }
        else
        {
            count++;
        }
    }
    sum = max(sum, count);
    cout << sum << endl;
}