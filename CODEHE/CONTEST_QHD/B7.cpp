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
ll b[maxn];
void magicFunc()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = INT_MIN;
    ll ans = 0;
    FOR(i, 0, n - 1)
    {
        ll k = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
        dp[k] = a[i];
        ans = max(ans, k);
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
