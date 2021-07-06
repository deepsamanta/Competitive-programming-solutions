#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test, sum = 0;
    cin >> test;
    ll a1[101] = {0};
    ll a2[101] = {0};
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        a1[a]++;
        a2[b]++;
    }
    for (int i = 1; i <= 100; i++)
    {
        //cout << a1[i] << " " << a2[i] << endl;
        if (a1[i] > 0)
        {
            sum += a1[i] * a2[i];
        }
    }
    cout << sum << endl;
}
