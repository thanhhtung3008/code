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
const long long INF = 1e18 + 7;
const long long INfo = 0x3f;
const long long MOD = 1e9 + 7;
ll n, q;
ll a[maxn];
/*
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
    st[id] = max(st[id * 2], st[id * 2 + 1]);
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
    st[id] = max(st[id * 2], st[id * 2 + 1]);
}
ll get(int id, int l, int r, int u, int v, int x, int y, int k)
{
    if (v < l || r < u)
    {
        return 1;
    }
    if (u <= l && v >= r)
        return st[id];
    int mid = (l + r) / 2;
    ll n = get(id * 2, l, mid, u, v, x, y, k);
    ll m = get(id * 2 + 1, mid + 1, r, u, v, x, y, k);
    if (m >= x && m <= y && n >= x && n <= y)
        return (pow(n, k) * pow(m, k));
    return 1;
}*/
void magicFunc()
{
    cin >> n >> q;
    FOR(i, 1, n)
    cin >> a[i];
    // build(1, 1, n);
    while (q--)
    {
        ll l, r, x, y, k, p = 1;
        cin >> l >> r >> x >> y >> k;
        FOR(i, l, r)
        {
            if (a[i] >= x && a[i] <= y)
            {
                p = p * pow(a[i], k);
            }
        }
        cout << p % MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    magicFunc();
    return 0;
}