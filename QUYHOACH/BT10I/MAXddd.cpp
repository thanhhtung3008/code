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
ll m, n;
ll a[1001][1001];
ll dp[1001][1001];
void magicFunc()
{
    memset(dp, 0, sizeof(dp));
    cin >> m >> n;
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    FOR(j, 1, n)
    {
        FOR(i, 1, m)
        {
            dp[i][j] += max(dp[i - 1][j - 1], max(dp[i][j - 1], dp[i + 1][j - 1])) + a[i][j];
        }
    }
    ll ans = LONG_LONG_MIN;
    FOR(i, 1, m)
    {
        if (dp[i][n] > ans)
            ans = dp[i][n];
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    magicFunc();
    return 0;
}
