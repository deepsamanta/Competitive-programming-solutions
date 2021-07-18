#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string main_str, ins_str;
    cin >> main_str >> ins_str;
    ll a = 0;
    for (int i = 0; i < ins_str.length(); i++)
    {
        if (ins_str[i] == main_str[a])
        {
            a++;
        }
    }
    cout << a + 1 << endl;
}