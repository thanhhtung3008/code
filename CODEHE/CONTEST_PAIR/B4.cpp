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
vector<pair<string, ll>> a;
set<ll> d;
vector<ll> v;
ll ranked[100001];
void magicFunc()
{
    cin >> n;
    ll y, x;
    string s;
    FOR(i, 0, n - 1)
    {
        cin >> s >> x >> y;
        a.push_back({s, x + y});
        d.insert(x + y);
    }
    for (auto i : d)
    {
        v.push_back(i);
    }
    reverse(v.begin(), v.end());
    ll k = 1;
    for (auto i : v)
    {
        ranked[i] = k;
        ++k;
    }
    FOR(i, 0, n - 1)
    {
        cout << a[i].ft << " " << ranked[a[i].sc] << endl;
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