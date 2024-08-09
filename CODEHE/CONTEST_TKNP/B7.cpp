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
ll n;
ll ans = LONG_MAX;
ll cal(vector<ll> &a, vector<ll> &b)
{
    sort(b.begin(), b.end());
    for (auto i : a)
    {
        auto k = lower_bound(b.begin(), b.end(), -i);
        if (k != b.end())
            ans = min(ans, abs(i + *k));
        if (k != b.begin())
        {
            k--;
            ans = min(ans, abs(i + *k));
        }
    }
    return ans;
}
void magicFunc()
{
    cin >> n;
    vector<ll> b(n), a(n);
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    FOR(i, 0, n - 1)
    {
        cin >> b[i];
    }
    cout << cal(a, b);
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