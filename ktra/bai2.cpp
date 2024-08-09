/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
long long n, a[301][301];
void nhap()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
        for (long long j = 1; j <= n; j++)
            cin >> a[i][j];
}
void xuli()
{
    long long k;
    if (n % 2 == 0)
        k = n / 2;
    else
        k = (n / 2) + 1;
    if (n == 1)
        cout << a[n][n];
    else
    {

        for (long long i = 1; i <= k; i++)
        {
            long long s = 0;
            for (long long j = i; j <= n - i + 1; j++)
                for (long long t = i; t <= n - i + 1; t++)
                    if (j == i || t == i || j == n - i + 1 || t == n - i + 1)
                        s += a[j][t];
            cout << s << " ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    xuli();
    return 0;
}