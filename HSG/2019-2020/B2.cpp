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
ll n, d;
void magicFunc()
{
    cin >> n >> d;
    vector<ll> uoc(n + 1, 0);
    for (long long i = 1; i <= n / 2; ++i)
    {
        for (long long j = 2 * i; j <= n; j += i)
        {
            uoc[j] += i;
        }
    }
    ll ans = 0;
    FOR(i, 1, n)
    {
        if (abs(i - uoc[i]) <= d)
        {
            // cout << i << " " << uoc[i] << endl;
            ans++;
        }
    }
    cout << ans;
    // cout << tinh(18);
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