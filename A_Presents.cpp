#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test,num;
    cin>>test;
    ll arr[test+1];
    for(int i=1;i<=test;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=test;i++)
    {
        for(int j=1;j<=test;j++)
        {
            if (arr[j]==i)
            {
                cout<<j<<" ";
            }
        }
    }
}