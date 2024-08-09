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
ll n, p, t;
bool check(ll n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    FOR(i, 2, n / 2)
    if (n % i == 0)
        return false;
    return true;
}
map<long long, long long> dem;
void d(ll n)
{
    p = 1;
    ll k = 0;
    t = 1;
    for (ll i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if (check(i))
                dem[k] = i;
            t++;
        }
    }
    for (auto i : dem)
        p *= i.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    ll n, a, b, dy = 0;
    cin >> n >> a >> b;
    for (long long k = 1; k <= n; k++)
    {
        d(k);
        if (t >= a && t <= b && p * k <= n)
            dy++;
    }
    cout << dy;
    return 0;
}
