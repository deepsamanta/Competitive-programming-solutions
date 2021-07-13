#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll arr[a], count = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < b; i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
    }
    for (int i = b; i < a; i++)
    {
        if (arr[i] == arr[b - 1] && arr[i] != 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
}