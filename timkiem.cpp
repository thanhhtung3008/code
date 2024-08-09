/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */
/*
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
long long n, m, s, t;
bool visited[10001];
// ll d[10001];
ll parent[10001];
void nhap()
{
    cin >> n >> m >> s >> t;
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
        cout << "NO";
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
        cout << PATH.end() - PATH.begin() << endl;
        for (ll x : PATH)
            cout << x << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    path(s, t);
    return 0;
}
*/
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

ll n, m, adj[101][101];
ll dx[4] = {-1, 0, 1, 0};
ll dy[4] = {0, -1, 0, 1};
bool visited[101][101];
ll dem = 0;
void nhap()
{
    cin >> n >> m;
    FOR(i, 1, n)
    FOR(j, 1, m)
    cin >> adj[i][j];
    memset(visited, false, sizeof(visited));
}
void bfs(ll i, ll j)
{
    dem = 0;
    queue<pair<ll, ll>> q;
    q.push({i, j});
    visited[i][j] = true;
    while (!q.empty())
    {
        dem++;
        pair<ll, ll> v = q.front();
        q.pop();
        for (ll k = 0; k <= 3; k++)
        {
            ll i1 = v.first + dx[k];
            ll j1 = v.second + dy[k];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !visited[i1][j1] && adj[i1][j1] == 0)
            {

                q.push({i1, j1});
                visited[i1][j1] = true;
            }
        }
    }
}
void xuli()
{
    ll ans = 0, maxa = 0;
    FOR(i, 1, n)
    FOR(j, 1, m)
    if (!visited[i][j] && adj[i][j] == 0)
    {
        bfs(i, j);
        if (dem >= maxa)
        {
            maxa = dem;
        }
        ans++;
    }
    cout << ans << endl;
    cout << maxa << endl;
    memset(visited, false, sizeof(visited));
    FOR(i, 1, n)
    FOR(j, 1, m)
    if (!visited[i][j] && adj[i][j] == 0)
    {
        bfs(i, j);
        if (dem == maxa)
        {
            cout << i << " " << j << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    xuli();
    return 0;
}