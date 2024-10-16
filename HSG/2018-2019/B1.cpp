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
ll tinh(ll n)
{
    ll s = 1;
    FOR(i, 2, sqrt(n))
    {
        if (n % i == 0)
        {
            s += i;
            if (i != n / i)
            {
                s += (n / i);
            }
        }
    }
    return s;
}
void magicFunc()
{
    ll a, b;
    ll ans = 0;
    cin >> a >> b;
    FOR(i, a, b)
    {
        if (tinh(i) > i)
        {
            ans++;
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