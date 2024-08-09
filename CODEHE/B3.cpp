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
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
ll Rand(ll l, ll h)
{
    return l + rd() % (h - l + 1);
}
ll mul(ll a, ll b, ll mod)
{
    ll res = 0;
    while (b)
    {
        if (b % 2 != 0)
            res = (res + a) % mod;
        a = (a + a) % mod;
        b /= 2;
    }
    return res;
}
ll POW(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b)
    {
        if (b % 2 != 0)
            res = mul(res, a, mod);
        a = mul(a, a, mod);
        b /= 2;
    }
    return res;
}
bool isprime(ll n)
{
    FOR(i, 1, 100)
    {
        ll x = Rand(2, n - 1);
        if (POW(x, n - 1, n) != 1)
            return false;
    }
    return true;
}
void magicFunc()
{
    ll n;
    cin >> n;
    cout << isprime(n);
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