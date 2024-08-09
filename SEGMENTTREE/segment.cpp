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
ll n, p, v, st[maxn], a[maxn];
void nhap()
{
    cin >> n;
    FOR(i, 1, n)
    cin >> a[i];
}
void build(int id, int l, int r)
{
    if (l == r)
    {
        st[id] = a[r];
        return;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
    st[id] = max(st[id * 2], st[id * 2 + 1]); // Theo đề
}
void update(int id, int l, int r, int pos, int v)
{
    if (pos < l || pos > r)
        return;
    if (l == r)
    {
        st[id] = v;
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, pos, v);
    update(id * 2 + 1, mid + 1, r, pos, v);
    st[id] = max(st[id * 2], st[id * 2 + 1]); // Theo đề
}
ll get(int id, int l, int r, int u, int v)
{
    if (v < l || r < u)
    {
        return -INF;
    }
    if (u <= l && v >= r)
        return st[id];
    ll mid = (l + r) / 2;
    return max(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    build(1, 1, n);
    update(1, 1, n, 3, 12);
    cout << st[n];
    return 0;
}