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
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.sc > b.sc;
}
ll vt[maxn];
void magicFunc()
{
    ll n;
    cin >> n;
    ll b, c;
    string a;
    vector<pair<string, ll>> p;
    vector<pair<ll, ll>> xh;
    FOR(i, 1, n)
    {
        cin >> a >> b >> c;
        p.push_back({a, b + c});
    }
    ll ans = 1;
    for (auto i : p)
    {
        xh.push_back({ans, i.sc});
        ans++;
    }
    sort(xh.begin(), xh.end(), comp);
    vt[xh[0].ft] = 1;
    FOR(i, 1, n - 1)
    {
        if (xh[i].sc == xh[i - 1].sc)
            vt[xh[i].ft] = vt[xh[i - 1].ft];
        else
            vt[xh[i].ft] = i + 1;
    }
    FOR(i, 1, n)
    {
        cout << p[i - 1].ft << " " << vt[i] << endl;
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