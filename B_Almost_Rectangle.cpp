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
        char arr[a][a];

        ll m, b, c, d, count = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*' && count == 0)
                {
                    m = i;
                    b = j;
                    count++;
                }
                else if (arr[i][j] == '*' && count == 1)
                {
                    c = i;
                    d = j;
                    count++;
                }
            }
        }
        ll e, f, g, h;
        if (m != c && b != d)
        {
            e = m;
            f = d;
            g = c;
            h = b;
            arr[e][f] = '*';
            arr[g][h] = '*';
        }
        else if (b == d)
        {
            if (b == d && b == 0)
            {
                arr[m][b + 1] = '*';
                arr[c][b + 1] = '*';
            }
            else if (b == d && b > 0)
            {
                arr[m][b - 1] = '*';
                arr[c][b - 1] = '*';
                // cout << "lola" << endl;
            }
        }
        else if (m == c)
        {
            if (m == c && m == 0)
            {
                arr[c + 1][b] = '*';
                arr[c + 1][d] = '*';
                //cout << "NO" << endl;
            }
            else if (m == c && m > 0)
            {
                arr[c - 1][b] = '*';
                arr[c - 1][d] = '*';
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        // cout << m << " " << c << " " << b << " " << d << endl;
    }
}
// *.*.
// ....
// *.*.
// ....
// **
// **
// .*
// **
// *.*
// ...
// ...
// .....
// .**..
// .....
// .**..
// .....
// ....
// ....
// *...
// **..