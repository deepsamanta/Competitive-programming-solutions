#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll num, time;
    cin >> num >> time;
    ll flag = 0, sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i * 5;
        if (sum + time > 240)
        {
            cout << i - 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        cout << num << endl;
    }
}