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
bool check(ll n)
{
    FOR(i, 2, sqrt(n))
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

bool cs(ll a)
{
    ll k, s = 0;
    while (a != 0)
    {
        k = a % 10;
        s += k;
        if (k != 2 && k != 3 && k != 5 && k != 7)
        {
            return false;
        }
        a /= 10;
    }
    if (check(s))
        return true;
    return false;
}

void magicFunc()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    FOR(i, a, b)
    {
        if (cs(i) && check(i))
            ans++;
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