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

vector<ll> adj[10001];
long long n, m, s;
bool visited[10001];
// ll d[10001];
ll parent[10001];
void nhap()
{
    cin >> n >> m >> s;
    FOR(i, 1, m)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
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
        for (ll x : adj[v])
        {
            if (!visited[x])
            {
                // d[x] = d[v] + 1;
                q.push(x);
                visited[x] = true;
                parent[x] = v;
            }
        }
    }
}
void path(ll s, ll t)
{

    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    // memset(d, 0, sizeof(d));

    bfs(s);
    if (!visited[t])
        return;
    else
    {
        vector<ll> PATH;
        while (t != s)
        {
            PATH.push_back(t);
            t = parent[t];
        }
        PATH.push_back(s);
        reverse(PATH.begin(), PATH.end());
        // cout << PATH.end() - PATH.begin() << endl;
        for (ll x : PATH)
            cout << x << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    for (ll i = 1; i <= n; i++)
    {
        if (i != s)
            path(i, s);
    }

    return 0;
}