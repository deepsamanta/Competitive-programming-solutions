#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        ll arr[a], arr1[b];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        ll flag = 0, count = 0;
        for (int i = 0; i < b; i++)
        {
            cin >> arr1[i];
            for (int j = 0; j < a; j++)
            {
                if (arr1[i] == arr[j] && flag == 0)
                {
                    flag = 1;
                    count = arr1[i];
                }
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << 1 << " " << count << endl;
        }
    }
}