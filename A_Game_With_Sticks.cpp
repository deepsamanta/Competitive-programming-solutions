#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // what to do in this
    // first find the min of sticks present in rows or colmns
    // if the the min number of sticks is divisible by 2 then Malvika wins 
    // if not then Akshat wins
    
    ll a, b;
    cin >> a >> b;
    ll c = min(a, b);
    c % 2 == 0 ? cout << "Malvika" : cout << "Akshat";
}