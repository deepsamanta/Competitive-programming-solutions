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
        long double arr[a];
        for (int i = 0; i < a; i++)
        {
            long double c;
            cin >> c;
            arr[i] = c;
        }
        ll count = 0;
        for (int i = 0; i < a - 1; i++)
        {
            long double e = max(arr[i], arr[i + 1]);
            long double f = min(arr[i], arr[i + 1]);
            long double d = e / f;
            if (ceil(d) > 2)
            {
                while (f < e)
                {
                    f *= 2;
                    count++;
                }
                count--;
            }
        }
        cout << count << endl;
    }
}