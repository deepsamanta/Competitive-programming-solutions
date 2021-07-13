#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef set<long double> sll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll arr[a], count = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sll s;
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                long double b = abs(arr[i] - arr[j]);
                b /= 2;
                s.insert(b);
            }
        }
        cout << s.size() << endl;
    }
}