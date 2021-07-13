#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Interval
{
    string s;
};

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        Interval arr[(2 * a) - 1];
        ll arr1[b] = {0};
        for (int i = 0; i < 2 * a - 1; i++)
        {
            cin >> arr[i].s;
            if (i < a)
            {
                for (int j = 0; j < b; j++)
                {
                    arr1[j] += arr[i].s[j] - 'a';
                }
            }
            else
            {
                for (int j = 0; j < b; j++)
                {
                    arr1[j] -= arr[i].s[j] - 'a';
                }
            }
        }
        for (int i = 0; i < b; i++)
        {
            char c = arr1[i] + 'a';
            cout << c;
        }
        cout << endl;
    }
}
