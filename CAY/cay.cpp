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
int n, m;
ll used[maxn];
vector<pair<ll, ll>> adj[maxn];
struct edges
{
    ll x, y, w;
};
ll t = 0;
void prim(ll u)
{
    vector<edges> MST;
    ll d = 0;
    used[u] = true;
    while (MST.size() < n - 1)
    {
        ll minn = LONG_MAX;
        ll x, y;
        FOR(i, 1, n)
        {
            if (used[i])
            {
                for (pair<ll, ll> it : adj[i])
                {
                    ll j = it.first, ts = it.second;
                    if (!used[j] && ts < minn)
                    {
                        minn = ts;
                        x = j;
                        y = i;
                    }
                }
            }
        }
        MST.push_back({x, y, minn});
        t += minn;
        used[x] = true;
    }
    for (edges it : MST)
        cout << it.y << " " << it.x << " " << it.w << endl;
    cout << t;
}
void magicFunc()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int u, v, k;
        cin >> u >> v >> k;
        adj[u].push_back({v, k});
        adj[v].push_back({u, k});
    }
    memset(used, false, sizeof(used));
    prim(1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.out", "w", stdout);
    magicFunc();
    return 0;
}