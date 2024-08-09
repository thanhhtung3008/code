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
long long n, m, a[1001][1001];
void nhap()
{
    long long maxx = -10000, s;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++)
    {
        s = 0;
        for (long long j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            s += a[i][j];
        }
        if (s >= maxx)
            maxx = s;
    }
    cout << maxx;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    return 0;
}