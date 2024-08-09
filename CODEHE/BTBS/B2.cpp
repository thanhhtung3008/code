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
ll n, k;
ll a[maxn];
ll tknp(ll a[], ll n, ll l, ll r, ll x)
{
    ll res = -1;
    while (l <= r)
    {
        ll m = (r + l) / 2;
        if (a[m] == x)
        {
            res = m;
            r = m - 1;
        }
        else if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return res;
}
ll tknp2(ll a[], ll n, ll l, ll r, ll x)
{
    ll res = -1;
    while (l <= r)
    {
        ll m = (r + l) / 2;
        if (a[m] == x)
        {
            res = m;
            l = m + 1;
        }
        else if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return res;
}
void magicFunc()
{
    cin >> n >> k;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    ll ans = 0;
    FOR(i, 1, n)
    {
        ll x = k - a[i];
        ll f = tknp(a, n, i + 1, n, x);
        ll s = tknp2(a, n, i + 1, n, x);
        if (f != -1)
        {
            ans += (s - f + 1);
        }
    }
    cout << ans;
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