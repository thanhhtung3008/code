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
vector<ll> a;
void magicFunc()
{
    ll k, t;
    cin >> t >> k;
    ll x;
    while (cin >> x)
    {
        a.push_back(x);
    }
    ll n = a.size();
    for (ll i = n - 1; i >= k; i--)
        a[i + 1] = a[i];
    a[k] = t;
    for (ll i = 0; i <= n; i++)
        cout << a[i] << " ";
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