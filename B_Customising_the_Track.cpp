#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, sum = 0;
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % a == 0)
        {
            cout << 0 << endl;
        }
        else if (sum < a)
        {
            ll b = (a - sum) * sum;
            cout << b << endl;
        }
        else
        {
            ll b = sum / a; //5.7
            ll c = sum - b * a;//57-50
            ll d = c * (a - c);// 7*(10-7)
            cout << d << endl;
        }
    }
}