#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int tinh(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 3 * tinh(n / 2) + n;
}
int tinh1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 4 * tinh1(n / 3) + n;
}
int tinh2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return tinh2(n / 2) + 1;
}
int tinh3(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return 2 * tinh3(n / 2) + n;
    }
}
int tinhz(int n)
{
    if (n == 0)
        return 0;
    return 4 * tinhz(n / 3) + n;
}
signed main()                                                                                 
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n;
    cout << tinh3(1);
    return 0;
}