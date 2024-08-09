/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
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
ll cal(vector<ll> &a, ll fi, ll se)
{
    auto start = lower_bound(a.begin(), a.end(), fi);
    auto end = upper_bound(a.begin(), a.end(), se);
    return end - start;
}
void magicFunc()
{
    cin >> n;
    vector<ll> a(n);
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> m;
    vector<pair<ll, ll>> point(m);
    FOR(i, 0, m - 1)
    {
        cin >> point[i].ft >> point[i].sc;
    }
    FOR(i, 0, m - 1)
    {
        ll fi = point[i].ft;
        ll se = point[i].sc;
        cout << cal(a, fi, se) << endl;
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