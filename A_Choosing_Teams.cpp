#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll num, times;
    cin >> num >> times;
    ll arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    sort(arr, arr + num);
    for (int i = 0; i < num; i = i + 3)
    {
        if (arr[i] + times <= 5 && arr[i+1] + times <= 5 && arr[i+2] + times <= 5)
        {
            sum++;
        }
    }
    cout << sum << endl;
}