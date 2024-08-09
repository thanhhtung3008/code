#include <bits/stdc++.h>
using namespace std;
const long long oo = 1e18 + 7;
const long long maxx = 1e6 + 7;
long long n, t = -oo, d = -oo;
long long a[maxx], b[maxx];
void nhap()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
}
void xuat()
{
    if (b[1] == 1)
    {
        d = a[1];
    }
    else
    {
        t = a[1];
    }
    for (long long i = 2; i <= n; i++)
    {
        if (b[i] == 1)
        {
            d = max(d, t + a[i]);
            d = max(d, a[i]);
        }
        else
        {
            t = max(t, d + a[i]);
            t = max(t, a[i]);
        }
    }
    cout << max(t, d);
}
signed main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    xuat();
    return 0;
}