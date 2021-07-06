#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll count = 0;

        while (1)
        {
            if (a <= c && b <= c)
            {
                if (a < b)
                {

                    a += max(a, b);
                }
                else
                {

                    b += max(a, b);
                }

                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
}