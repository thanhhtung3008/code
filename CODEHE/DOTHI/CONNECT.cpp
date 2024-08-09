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
vector<ll> a[maxn];
bool visited[maxn];
void dfs(ll u)
{
    cout << u << " ";
    visited[u] = true;
    for (auto v : a[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}
void magicFunc()
{
    cin >> n >> m;
    FOR(i, 0, m - 1)
    {
        ll x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    FOR(i, 1, n)
    {
        if (!visited[i])
        {
            dfs(i);
            cout << endl;
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
    magicFunc();
    return 0;
}