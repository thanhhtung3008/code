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
string a;
map<string, ll> m;
bool comp(pair<string, ll> &c, pair<string, ll> &b)
{
    return c.sc > b.sc;
}
void magicFunc()
{
    ll t = 0;
    while (cin >> a)
    {
        m[a]++;
        t = max(t, m[a]);
    }
    vector<pair<string, ll>> p;
    for (auto i : m)
    {
        p.push_back({i.ft, i.sc});
    }
    sort(p.begin(), p.end(), comp);
    for (auto i : p)
    {
        if (t > i.sc)
        {
            t = i.sc;
            break;
        }
    }
    for (auto i : m)
    {
        if (i.sc == t)
        {
            cout << i.ft << endl;
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