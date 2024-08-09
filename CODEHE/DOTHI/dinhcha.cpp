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
vector<ll> adj[1001];
vector<ll> parent(1001, -1);
bool visited[1001];
void inp()
{
    cin >> n >> m;
    FOR(i, 1, m)
    {
        ll x, y;
        cin >> x >> y;
        adj[y].push_back(x);
        adj[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}
void bfs(ll u)
{
    queue<ll> q;
    visited[u] = true;
    parent[u] = 0;
    q.push(u);
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (auto i : adj[v])
        {
            if (!visited[i])
            {
                q.push(i);
                parent[i] = v;
                visited[i] = true;
            }
        }
    }
}
void dfs(ll u)
{
    visited[u] = true;
    for (auto i : adj[u])
    {
        if (!visited[i])
        {
            parent[i] = u;
            dfs(i);
        }
    }
}
void magicFunc()
{
    inp();
    FOR(i, 1, n)
    {
        if (!visited[i])
        {
            parent[i] = 0;
            dfs(i);
        }
    }
    FOR(i, 1, n)
    {
        cout << parent[i] << endl;
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