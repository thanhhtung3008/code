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
ll n, maxx;
map<ll, ll> m;
vector<pair<ll, ll>> vec;
void magicFunc()
{
    cin >> n;
    ll a, b, ans = 0;
    FOR(i, 1, n)
    {
        cin >> a >> b;
        vec.push_back({a, b});
        ll k = abs(a - b);
        m[k]++;
        if (m[k] > ans)
        {
            ans = m[k];
            maxx = k;
        }
    }
    cout << maxx << "\n";
    for (auto i : vec)
    {
        if (abs(i.ft - i.sc) == maxx)
            cout << i.ft << " " << i.sc << "\n";
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