#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

////// aaa yeah i got mastered in the sorting of the structures


struct Interval
{
    int start, end;
};
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
int main()
{
    // s and n;
    ll s, test, flag = 0;
    cin >> s >> test;
    Interval arr[test];
    for (int i = 0; i < test; i++)
    {
        cin >> arr[i].start;
        cin >> arr[i].end;
    }

    sort(arr, arr + test, compareInterval);

    for (int i = 0; i < test; i++)
    {
        if (s <= arr[i].start)
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
        else
        {
            s += arr[i].end;
        }
    }
    if (flag != 1)
    {
        cout << "YES" << endl;
    }
}