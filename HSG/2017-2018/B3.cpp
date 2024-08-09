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
ll n;
void magicFunc()
{
    cin >> n;
    vector<ll> a(n);
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll count = 0;
    FOR(i, 0, n - 3)
    {
        FOR(j, i + 1, n - 2)
        {
            ll x = lower_bound(a.begin() + j + 1, a.end(), 2 * a[j] - a[i]) - a.begin();
            ll y = upper_bound(a.begin() + j + 1, a.end(), 3 * a[j] - 2 * a[i]) - a.begin() - 1;
            count += (y - x + 1);
        }
    }
    cout << count;
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