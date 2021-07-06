#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    cin >> a;
    ll arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    ll b = 0; //for the min height soldier
    ll min = 1000;

    for (int i = a - 1; i >= 0; i--)
    {

        if (arr[i] < min)
        {
            b = i;
            min = arr[i];
        }
    }
    ll m = 0; // for the max height soldier
    ll max = 0;

    for (int i = 0; i < a; i++)
    {

        if (arr[i] > max)
        {
            m = i;
            max = arr[i];
        }
    }
  //  cout << b << m << endl;

    b > m ? cout << ((a - 1) - b) + m : cout << ((a - 1) - b) + m - 1;
}