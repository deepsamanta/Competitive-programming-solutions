#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    char arr[a];
    ll mini = 0, maxi = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (arr[i] == 'L')
        {
            mini++;
        }
        else
        {
            maxi++;
        }
    }
    cout << mini + maxi + 1 << endl;
}