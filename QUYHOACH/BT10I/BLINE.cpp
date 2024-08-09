
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
ll a[301][301];
map<ll, ll> counts;
void magicFunc()
{
    cin >> m >> n >> k;
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
            counts[a[i][j]]++;
        }
    }
    vector<pair<ll, ll>> p;
    for (auto i : counts)
    {
        p.push_back({i.second, i.first});
    }
    sort(p.rbegin(), p.rend());
    ll t = p.size();
    ll u = min(t, k);
    ll ans = 0;
    for (ll i = 0; i < u; i++)
    {
        ans += p[i].first;
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