#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll size, test;
    cin >> size >> test;
    string s;
    cin >> s;
    ll arr[size] = {0};
    for (int i = 0; i < size; i++)

    
    {
        if (i == 0)
        {
            arr[i] = s[i] - 'a' + 1;
        }
        else
        {
            arr[i] = s[i] - 'a' + 1 + arr[i - 1];
        }
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // 1 3 5 6 8 9 10
    // 4 2 0 3
    // 5 4 1 5

    //     7 4
    // abbabaa
    // 1 3
    // 5 7
    // 6 6
    // 2 4

    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        ll c = a - 2;
        if (a - 2 < 0)
        {
            cout << arr[b - 1] - 0 << endl;
        }
        else
        {
            cout << arr[b - 1] - arr[a - 2] << endl;
        }
    }
}