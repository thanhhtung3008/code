/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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
ll a, b;
ll tcs(ll a)
{
    ll s = 0;
    while (a)
    {
        s += a % 10;
        a /= 10;
    }
    return s;
}
void magicFunc()
{
    cin >> a >> b;
    ll k = __gcd(a, b);
    ll ans = 0;
    FOR(i, 1, sqrt(k))
    {
        if (k % i == 0)
            ans = max(ans, max(tcs(i), tcs(k / i)));
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
