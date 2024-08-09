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
ll suffix[5001];
void magicFunc()
{
    ll n;
    ll a[5001];
    cin >> n;
    FOR(i, 1, n)
    cin >> a[i];
    suffix[n + 1] = 0;
    ll ans = INT_MIN;
    for (int i = n; i >= 1; i--)
        suffix[i] = max(suffix[i + 1], a[i]);
    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j] && a[j] < suffix[j + 1])
            {
                ans = max(ans, a[i] + a[j] + suffix[j + 1]);
            }
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