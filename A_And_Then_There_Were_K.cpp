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
        // greater number will always make it zero we need something which will meke it non zero
        // Example   take 5 -- 101 if we take 8 1000 it will make it zero but we cant go higher
         // now take 4 11 it will make 5 non zero but it is the maximum number in the esquence to 
         // to make that thing the number to 0 using bitwise operator....
        cin >> a;
        for (int i = 31; i >= 0; i--)
        {
            if (a & (1 << i))
            {
                cout << (1 << i) - 1 << endl;
                break;
            }
        }
    }
}