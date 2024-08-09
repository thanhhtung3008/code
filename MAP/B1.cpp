/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)
#define endl "\n"

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
string a;
map<string, ll> m;
void magicFunc()
{
    while (cin >> a)
    {
        m[a]++;
    }
    vector<pair<ll, string>> b;
    for (auto i : m)
    {
        b.push_back({i.sc, i.ft});
    }
    sort(b.rbegin(), b.rend());
    cout << b[0].sc << " " << b[0].ft;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    magicFunc();
    return 0;
}