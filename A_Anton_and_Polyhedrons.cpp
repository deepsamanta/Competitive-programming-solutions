#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test, faces = 0;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
        {
            faces += 4;
        }
        else if (s == "Cube")
        {
            faces += 6;
        }
        else if (s == "Octahedron")
        {
            faces += 8;
        }
        else if (s == "Dodecahedron")
        {
            faces += 12;
        }
        else
        {
            faces += 20;
        }
    }
    cout << faces << endl;
}