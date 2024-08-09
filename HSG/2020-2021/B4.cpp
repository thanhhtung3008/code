/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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
void magicFunc()
{
    cin >> n >> m;
    ll a[n + 1][m + 1];
    ll dp[n + 1][m + 1];
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cin >> a[i][j];
        }
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            dp[i][j] = a[i][j] + dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1];
        }
    }
    ll ans = INT_MAX;
    FOR(i, 3, n)
    {
        FOR(j, 3, m)
        {
            ans = min(ans, dp[i][j] + dp[i - 3][j - 3] - dp[i - 3][j] - dp[i][j - 3]);
        }
        // cout << endl;
    }
    cout << ans;
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