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
void magicFunc()
{
    ll n;
    cin >> n;
    ll a[n + 1], dp[n + 1];
    FOR(i, 1, n)
    {
        cin >> a[i];
        dp[i] = 1;
    }
    ll res = 0;
    FOR(i, 2, n)
    {
        if (a[i] > a[i - 1])
        {
            dp[i] = max(dp[i - 1] + 1, dp[i]);
            res = max(dp[i], res);
        }
    }
    vector<ll> p;
    cout << res << endl;
    FORD(i, n, 1)
    {
        if (dp[i] == res)
        {
            p.push_back(a[i]);
            res--;
        }
    }
    FORD(i, p.size() - 1, 0)
    {
        cout << p[i] << " ";
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
