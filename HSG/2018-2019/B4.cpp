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
ll n, m;
ll dp[111][111], a[111][111];
void magicFunc()
{
    cin >> n >> m;
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cin >> a[i][j];
            if (i == 1)
            {
                dp[i][j] = a[i][j];
            }
        }
    }

    FOR(i, 2, n)
    {
        FOR(j, 1, m)
        {
            dp[i][j] = max({dp[i - 1][j - 2], dp[i - 2][j - 1], dp[i - 1][j + 2], dp[i - 2][j + 1]}) + a[i][j];
        }
    }
    ll ans = INT_MIN;
    FOR(i, 1, m)
    {
        ans = max(dp[n][i], ans);
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