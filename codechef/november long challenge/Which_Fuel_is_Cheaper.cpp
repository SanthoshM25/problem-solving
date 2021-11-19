#include <bits/stdc++.h>
using namespace std;

void cheaper()
{
    int x, y, a, b, k;
    cin >> x >> y >> a >> b >> k;
    while (k--)
    {
        x += a;
        y += b;
    }
    if (x < y)
    {
        cout << "PETROL" << endl;
    }
    else if (y < x)
    {
        cout << "DIESEL" << endl;
    }
    else
        cout << "SAME PRICE" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cheaper();
    }
    return 0;
}