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
ll m, n, k;
void magicFunc()
{
    cin >> m >> n >> k;
    ll a[m + 1][n + 1];
    unordered_map<ll, ll> mp;
    FOR(i, 0, m - 1)
    {
        FOR(j, 0, n - 1)
        {
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }
    vector<ll> ech;
    for (auto i : mp)
    {
        ech.push_back(i.sc);
    }
    sort(ech.begin(), ech.end(), greater<ll>());
    ll ans = 0;
    FOR(i, 0, k - 1)
    {
        ans += ech[i];
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