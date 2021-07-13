#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll arr[b], arr1[c];
        for (int i = 0; i < b; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < c; i++)
        {
            cin >> arr1[i];
        }
        ll i = 0, j = 0, counter = 0;
        vll v;
        while (1)
        {
            if (i < b && arr[i] <= a)
            {
                if (arr[i] == 0)
                {
                    a++;
                }
                v.push_back(arr[i]);
                i++;
                counter++;
            }
            else if (j < c && arr1[j] <= a)
            {
                if (arr1[j] == 0)
                {
                    a++;
                }
                v.push_back(arr1[j]);
                j++;
                counter++;
            }
            else
                break;
        }
        // cout << counter << " " << a << endl;
        if (counter != b + c)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int k = 0; k < counter; k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
        }
    }
}