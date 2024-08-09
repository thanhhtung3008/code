/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define endl '\n'
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll n;
vector<pair<ll, ll>> a;
vector<pair<ll, ll>> b;
map<ll, ll> m;
void magicFunc()
{
    cin >> n;
    ll x, y;
    FOR(i, 0, n - 1)
    {
        cin >> x >> y;
        a.push_back({x, y});
        b.push_back({i, abs(x - y)});
    }
    for (auto i : b)
    {
        m[i.sc]++;
    }
    ll ans = INT_MIN;
    ll kq;
    for (auto i : m)
    {
        if (i.sc > ans)
        {
            ans = i.sc;
            kq = i.ft;
        }
    }
    cout << kq << endl;
    for (auto i : b)
    {
        if (i.sc == kq)
            cout << a[i.ft].ft << " " << a[i.ft].sc << endl;
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