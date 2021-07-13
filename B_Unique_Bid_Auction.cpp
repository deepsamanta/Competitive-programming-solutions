#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
struct Interval
{
    int c, d;
};
bool CompareInterval(Interval e, Interval f)
{
    return (e.c < f.c);
}

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        Interval arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i].c;
            arr[i].d = i;
        }
        sort(arr, arr + a, CompareInterval);
        vll v;
        ll count = 1, j = 0;
        for (int i = 0; i < a - 1; i++)
        {
            if (arr[i].c == arr[i + 1].c)
            {
                count++;
            }
            else
            {
                v.push_back(count);
                count = 1;
                j++;
            }
        }
        v.push_back(count);
        j++;
        ll sum = 0, flag = 0;
        for (int i = 0; i < j; i++)
        {
            if (v[i] == 1)
            {
                for (int k = 0; k < i; k++)
                {
                    sum += v[k];
                }
              //  cout << sum << endl;
                cout << arr[sum].d + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }
}