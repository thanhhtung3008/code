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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    FOR(i, 0, n - 1)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    a.insert(a.begin(), k);
    sort(a.begin(), a.end());
    FOR(i, 0, a.size() - 1)
    cout << a[i] << " ";
    return 0;
}