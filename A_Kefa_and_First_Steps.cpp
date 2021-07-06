#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    ll arr[test];
    ll num = 0, sum = 0, newsum = 0;
    for (int i = 0; i < test; i++)
    {
       // cout << sum << endl;
        cin >> arr[i];
        if (arr[i] >= num)
        {
            num = arr[i];
            sum++;
        }
        if (sum >= newsum)
        {
            newsum = sum;
        }
        if (arr[i] < num)
        {
            if (sum >= newsum)
            {
                newsum = sum;
            }
            sum = 1;
            num = arr[i];
        }
    }
    newsum == 0 ? cout << sum : cout << newsum;
}