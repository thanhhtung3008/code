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
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.sc == b.sc)
    {
        return a.ft > b.ft;
    }
    return a.sc < b.sc;
}
void magicFunc()
{
    cin >> n;
    ll x, y;
    FOR(i, 0, n - 1)
    {
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end(), cmp);
    for (auto i : a)
    {
        cout << i.ft << " " << i.sc << endl;
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