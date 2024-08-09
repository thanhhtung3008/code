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
ll m, n, a[501][501], f[1001][1001], ans;
void magicFunc()
{
    cin >> m >> n;
    FOR(i, 1, m)
    FOR(j, 1, n)
    cin >> a[i][j];
    memset(f, 0, sizeof(f));
    FOR(i, 1, m)
    f[i][1] = a[i][1];
    FOR(j, 1, n)
    {
        FOR(i, 1, m)
        {
            f[i][j] = a[i][j] + max(f[i - 1][j - 1], max(f[i][j - 1], f[i + 1][j - 1]));
        }
    }
    // if (j - 1 >= 1 && i - 1 >= 1 && i + 1 <= m)
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    magicFunc();
    return 0;
}