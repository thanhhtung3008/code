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
ll n, q, p;
ll a[maxn];
ll s[maxn];
bool check(ll m, ll k)
{
    return (m + s[p] - s[m] >= 111 * (p - m) * k);
}
void magicFunc()
{
    cin >> n >> q;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    FOR(i, 1, n)
    {
        s[i] = s[i - 1] + a[i];
    }
    while (q--)
    {
        ll k;
        cin >> k;
        p = lower_bound(a + 1, a + n + 1, k) - a - 1;
        ll l = -1, r = p;
        while (r - l > 1)
        {
            ll m = (r + l) / 2;
            if (check(m, k))
                r = m;
            else
                l = m;
        }
        cout << n - r << '\n';
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