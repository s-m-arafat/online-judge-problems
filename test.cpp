#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int

#include <algorithm>
#include <iostream>


void greater_v()
{
    cout << ">"
         << "\n";
}

void smaller()
{
    cout << "<"
         << "\n";
}

void equal()
{
    cout << "="
         << "\n";
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int temp = 0;

    int a_x = a.size() - 1, b_x = b.size() - 1;

    a = a[a.size() - 1];
    b = b[b.size() - 1];

    // cout << a << " " << b << "\n";
    if (a == b)
    {
        if (a == "L")
        {
            if (a_x > b_x)
                greater_v();
            else if (a_x == b_x)
                equal();
            else
                smaller();
        }

        else
        {
            if (a_x < b_x)
                greater_v();
            else if (a_x == b_x)
                equal();
            else
                smaller();
        }
    }

    else
    {
        if (a == "L" && (b == "S" || b == "M"))
            greater_v();
        else if (a == "S" && (b == "L" || b == "M"))
            smaller();
        else if (a == "M" && b == "L")
            smaller();
        else if (a == "M" && b == "S")
            greater_v();
        else
            cout << "yet" << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
