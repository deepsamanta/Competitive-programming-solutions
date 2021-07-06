#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll year;
    string s;
    cin >> year;
    year++;
    stringstream ss;
    ss << year;
    ss >> s;
    while (1)
    {
        ll sum = 0, arr[10] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            arr[s[i] - '0'] = 1;
        }
        for (int i = 0; i < 10; i++)
        {
            sum += arr[i];
        }

        if (sum == 4)
        {
            cout << s << endl;
            break;
        }
        year++;
        //  cout << year << endl;
        stringstream sm;
        sm << year;
        sm >> s;

        if (sum == 4)
        {
            break;
        }
    }
}