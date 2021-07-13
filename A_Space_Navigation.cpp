#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //     if si=U, you move to (x,y+1);
    // if si=D, you move to (x,y−1);
    // if si=R, you move to (x+1,y);
    // if si=L, you move to (x−1,y).
    ll test;
    cin >> test;
    while (test--)
    {
        ll x1, y1;
        cin >> x1 >> y1;
        ll u = 0, d = 0, r = 0, l = 0;
        string s;
        cin >> s;
        ll flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'U')
            {
                u++;
            }
            else if (s[i] == 'D')
            {
                d--;
            }
            else if (s[i] == 'R')
            {
                r++;
            }
            else
            {
                l--;
            }
            if ((x1 <= r && y1 <= u) && x1 >= 0 && y1 >= 0)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            else if ((x1 >= l && y1 >= d) && x1 < 0 && y1 < 0)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            else if ((x1 <= r && y1 >= d) && x1 >= 0 && y1 < 0)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }

            else if ((x1 >= l && y1 <= u) && x1 < 0 && y1 >= 0)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
}
