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
        ll arr[2 * a];
        for (int i = 0; i < 2 * a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + (2 * a));
        int c = 2 * a - 1;
        int d = 0;
        for (int i = 0; i < a; i++)
        {
            cout << arr[c] << " " << arr[d] << " ";
            c--;
            d++;
        }
        cout << endl;
    }
}