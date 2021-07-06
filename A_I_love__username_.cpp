#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   // ye question bada maderchod tha 



    ll test;
    cin >> test;
    ll arr[test] = {0};
    for (int i = 0; i < test; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0, count = 0, newcount = 0;
    for (int i = 1; i < test; i++)
    {
        ll min = arr[i], max = arr[i];
        ll flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
            }
            if (arr[j] > max)
            {
                max = arr[j];
            }
            if (arr[j] < min)
            {
                min = arr[j];
            }
        }
        //  cout << newcount << endl;
        //cout << min << " " << max << endl;
        if ((min == arr[i] || max == arr[i]) && flag == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
}