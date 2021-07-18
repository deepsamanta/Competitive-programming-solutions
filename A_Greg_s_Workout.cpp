#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    ll arr[a];
    ll chest = 0, biceps = 0, back = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i += 3)
    {
        chest += arr[i];
        if (i + 1 < a)
        {
            biceps += arr[i + 1];
        }
        if (i + 2 < a)
        {
            back += arr[i + 2];
        }
    }
    if (chest > biceps && chest > back)
    {
        cout << "chest" << endl;
    }
    else if (biceps > chest && biceps > back)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }
}