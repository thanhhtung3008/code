/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (int i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (int i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
int n, W, t;
int a[101], b[101], c[101];
int f[10001][10001];
void nhap()
{
    cin >> n >> W >> t;
    FOR(i, 1, n)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    memset(f, 0, sizeof(f));
}
void xuli()
{
    FOR(i, 1, n)
    FOR(j, 1, W)
    {
        f[i][j] = f[i - 1][j];
        if (c[i] <= j)
            f[i][j] = max(f[i][j], f[i - 1][j - c[a[i]]] + c[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    nhap();
    xuli();
    cout << f[n][W];
    return 0;
}
