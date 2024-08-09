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
ll n, m;
bool visited[10001];
ll parent[10001];
void nhap()
{
    cin >> n >> m;
    for (ll i = 1; i <= m; i++)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // memset(visited, false, sizeof(visited));
}
ll maxx = -oo, t;
void dfs(ll u)
{
    t = 1;
    // cout << u << " ";
    visited[u] = true;
    for (ll v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
            t++;
        }
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
        cout << v << " ";
        q.pop();
        // cout << v << " ";
        for (ll i : adj[v])
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
    }
}
/*
// Bài 4
 int main()
 {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("input.inp", "r", stdin);
     freopen("output.out", "w", stdout);
     nhap();
     ll ans = 0;
     for (ll i = 1; i <= n; i++)
     {
         if (!visited[i])
         {
             bfs(i);
             ans++;
         }
     }
     cout << ans;
     return 0;
 }*/
/*
// Bài 5
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    ll k = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cout << "Vung " << k << ": ";
            k++;
            dfs(i);
            cout << endl;
        }
    }
    return 0;
}*/
/*
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
        if (!visited[i])
        {
            dfs(i);
            if (t >= maxx)
                maxx = t;
        }
    }
    cout << maxx;
    memset(visited, false, sizeof(visited));
    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
    }
}*/
void path(ll s, ll t)
{
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    // memset(d, 0, sizeof(d));
    bfs(s);
    if (visited[t])
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
    else
        return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();

    path(2, 6);
    cout << endl;
}
/*
void dfs(ll u)
{
    stack<ll> v;
    cout << u << " ";
    v.push(u);
    visited[u] = true;
    while (!v.empty())
    {
        ll s = v.top();
        v.pop();
        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
        }
        for (ll i : adj[s])
            if (!visited[i])
                v.push(i);
    }
}*/
/*
void dfs(ll u)
{
    stack<ll> v;
    // cout << u << " ";
    v.push(u);
    // visited[u] = true;
    while (!v.empty())
    {
        ll s = v.top();
        v.pop();
        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
        }
        for (ll i : adj[s])
            if (!visited[i])
                v.push(i);
    }
}*/
