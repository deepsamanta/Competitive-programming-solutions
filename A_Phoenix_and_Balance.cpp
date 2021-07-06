#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //// to make the difference to be minimum we need to add the max number to the smaller
    // numbers till the half  of the given coin and 2nd half sum will be the sum from the half
    /// till the number less than the max, after that subtract the numbers and find the abs.
    ll test;
    cin >> test;
    while (test--)
    {
        ll a;
        cin >> a;
        ll half = a / 2;
        ll st_half = pow(2, a);
        for (int i = 1; i < half; i++)
        {
            st_half += pow(2, i);
        }
        ll nd_half = 0;
        for (int i = half; i < a; i++)
        {
            nd_half += pow(2, i);
        }
        cout << abs(st_half - nd_half) << endl;
    }
}