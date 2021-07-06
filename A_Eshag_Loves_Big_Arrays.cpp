#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   /// in this code find the smallest element and the number of time it occured  and rest
    // rest can be deleted from the array.
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        ll maxcom = 0, count = 1;
        for (int i = 1; i <= a; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
            else
            {
                maxcom = max(maxcom, count);
                break;
            }
        }
        maxcom = max(maxcom, count);
        if (a == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << a - maxcom << endl;
        }
    }
}