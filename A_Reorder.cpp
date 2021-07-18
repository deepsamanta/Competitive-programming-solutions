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
        ll arr[a], sum = 0;
        // If the sum of the number is equal to the give sum in b then the answer would be yes
        // it can be aranged in such a way that the sum of the decimal of those numbers will be
        // equal to the given sum
        
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}