#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)
#define int long long
const ll maxn = 1e5;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll n, q, a[maxn], st[maxn * 4];
int lazy[maxn * 4];
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
void fix(int id, int l, int r)
{
    if (!lazy[id])
        return;
    st[id] += lazy[id];
    if (l != r)
    {
        lazy[2 * id] += lazy[id];
        lazy[2 * id + 1] += lazy[id];
    }
    lazy[id] = 0;
}
void update(int id, int l, int r, int pos1, int pos2, int v)
{
    fix(id, l, r);
    if (pos2 < l || pos1 > r)
        return;
    if (pos1 <= l && pos2 >= r)
    {
        lazy[id] += v;
        fix(id, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, pos1, pos2, v);
    update(id * 2 + 1, mid + 1, r, pos1, pos2, v);
    st[id] = max(st[id * 2], st[id * 2 + 1]); // Theo đề
}
ll get(int id, int l, int r, int u, int v)
{
    fix(id, l, r);
    if (v < l || r < u)
    {
        return -oo;
    }
    if (u <= l && v >= r)
        return st[id];
    int mid = (l + r) / 2;
    int x = get(id * 2, l, mid, u, v);
    int y = get(id * 2 + 1, mid + 1, r, u, v);
    return max(x, y);
}
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    cin >> a[i];
    build(1, 1, n);
    cin >> q;
    while (q--)
    {
        int type, l, r, val;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cin >> val;
            update(1, 1, n, l, r, val);
        }
        else
            cout << get(1, 1, n, l, r) << '\n';
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    magicFunc();
    return 0;
}
