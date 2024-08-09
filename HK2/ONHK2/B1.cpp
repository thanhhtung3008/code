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
bool comp(pair<string, pair<ll, ll>> a, pair<string, pair<ll, ll>> b)
{
    if (a.sc.ft == b.sc.ft)
        return a.sc.sc > b.sc.sc;
    else
        return a.sc.ft > b.sc.ft;
}
void magicFunc()
{
    ll n;
    vector<pair<string, pair<ll, ll>>> p;
    cin >> n;
    string a;
    ll b, c;
    FOR(i, 1, n)
    {
        cin >> a >> b >> c;
        p.push_back({a, {b, c}});
    }
    sort(p.begin(), p.end(), comp);
    for (auto i : p)
    {
        cout << i.ft << " " << i.sc.ft << " " << i.sc.sc << endl;
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