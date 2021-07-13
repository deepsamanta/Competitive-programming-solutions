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
        string s;
        ll arr[a];
        ll arr1[a];
        cin >> s;
        for (int i = 0; i < a; i++)
        {
            arr[i] = s[i] - '0';
        }
        for (int i = 0; i < a; i++)
        {
            if (i == 0)
            {
                arr[i] += 1;
                arr1[i] = 1;
            }
            else
            {
                if (arr[i] + 1 == arr[i - 1])
                {
                    arr[i] += 0;
                    arr1[i] = 0;
                }
                else
                {
                    arr[i] += 1;
                    arr1[i] = 1;
                }
            }
        }
        for (int i = 0; i < a; i++)
        {
            cout << arr1[i];
        }
        cout << endl;
    }
}