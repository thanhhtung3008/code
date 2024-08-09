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
ll n, q, a[100001], a2[100001], a3[100001];

void preprocess()
{
    for (int i = 1; i + 1 <= n; ++i)
    {
        a2[i] = min(a[i], a[i + 1]);
        a3[i] = max(a[i], a[i + 1]);
    }
}
int queryMin(int l, int r)
{
    int len = r - l + 1;
    if (len == 1)
        return a[l];

    int mi = INT_MAX;
    for (int i = l; i + 1 <= r; i += 2)
    {
        mi = min(mi, a2[i]);
    }
    mi = min(mi, a2[r - 1]);
    return mi;
}
void nhap()
{
    cin >> n;
    FOR(i, 1, n)
    cin >> a[i];
    cin >> q;
    while (q--)
    {
        ll u, v;
        cin >> u >> v;
        cout << queryMin(u, v) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}