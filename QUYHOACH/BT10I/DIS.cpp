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
const ll maxx = 1e5 + 5;
ll n, d1, d2, d3, c1, c2, c3, s, f;
ll a[maxx];
ll dp[maxx];
void magicFunc()
{
    cin >> n;
    cin >> d1 >> d2 >> d3 >> c1 >> c2 >> c3;
    cin >> s >> f;
    FOR(i, 2, n)
    {
        cin >> a[i];
    }
    FOR(i, 1, n)
    {
        dp[i] = LONG_MAX;
    }
    dp[s] = 0;
    FOR(i, s, f)
    {
        FOR(j, i + 1, f)
        {
            ll dis = a[j] - a[i];
            if (dis <= d1)
            {
                dp[j] = min(dp[j], dp[i] + c1);
            }
            else if (dis <= d2)
                dp[j] = min(dp[j], dp[i] + c2);
            else if (dis <= d3)
                dp[j] = min(dp[j], dp[i] + c3);
        }
    }
    cout << dp[f];
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