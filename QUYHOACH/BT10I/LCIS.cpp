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
ll a[501], b[501];
ll dp[501][501];
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    cin >> m;
    FOR(j, 1, m)
    {
        cin >> b[j];
    }
    FOR(i, 1, n)
    {
        ll ans = 0;
        FOR(j, 1, m)
        {
            // dp[i][j] = dp[i - 1][j];
            if (a[i] > b[j])
            {
                ans = max(ans, dp[i - 1][j]);
            }
            if (a[i] == b[j])
            {
                dp[i][j] = ans + 1;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << *max_element(dp[n] + 1, dp[n] + m + 1);
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