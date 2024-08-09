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
ll n, m;
bool visited[1001];
vector<ll> adj[1001];
void inp()
{
    cin >> n >> m;
    FOR(i, 1, m)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
void bfs(ll u)
{
    queue<ll> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        cout << v << " ";
        for (auto i : adj[v])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
void dfs(ll u)
{
    visited[u] = true;
    cout << u << " ";
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}
void magicFunc()
{
    inp();
    ll ans = 0;
    FOR(i, 1, n)
    {
        if (!visited[i])
        {
            ans++;
            cout << "Cac diem thuoc thanh phan lien thong thu " << ans << ":";
            dfs(i);
            cout << endl;
        }
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
