#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    ll count = 1;
    for (int i = 1; i < a; i++)
    {
        if (arr[i] - arr[i - 1] <= b)
        {
            count++;
        }
        else
        {
            count = 1;
        }
    }
    cout<<count<<endl;
}