#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    ll sum = 0, count = 0;
    while (test--)
    {
        ll a;
        cin >> a;
        sum += a;
        if (sum < 0)
        {
            count++;
            sum=0;
        }
    }
    cout << count<<endl;
}