#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    char arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)

        {
            cin >> arr[i][j];
        }
    }
    ll row_count = 0;
    for (int i = 0; i < a; i++)
    {
        ll flag = 0;
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == 'S')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            row_count++;
        }
    }
    ll col_count = 0;
    for (int i = 0; i < b; i++)
    {
        ll flag = 0;
        for (int j = 0; j < a; j++)
        {
            if (arr[j][i] == 'S')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            col_count++;
        }
    }
    //  cout << row_count << " " << col_count << endl;
    if (row_count == a || col_count == b)
    {
        cout << a * b << endl;
    }
    else
    {
        ll e = 0;
        if (row_count > 0 && col_count > 0)
        {
            e = row_count*col_count;
        }
        ll d = (row_count * b) + (col_count * a) - e;
        cout << d << endl;
    }
}