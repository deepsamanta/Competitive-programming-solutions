#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    /// what to do in this  program
    // if the next index value is smaller than the previous one your have to rotate again
    // from the start excetpt for the first block you don't have to check that but if the next
    // index value is greater or equal than the previous one you can go or stay at that location
    // after that sum- which is the total number of minimum time need to do all these works

    ll n, m;
    cin >> n >> m;
    ll sum = 0, temp;
    for (int i = 0; i < m; i++)
    {
        ll a;
        cin >> a;

        if (i == 0)
        {
            sum += a;
        }
        if (i > 0)
        {
            if (a < temp)
            {
                sum += n - temp + a;
            }
            if (a >= temp)
            {
                sum += a - temp;
            }
        }
        temp = a;
    }
    cout << sum - 1 << endl;
}