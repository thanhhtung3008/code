/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define endl '\n'
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll n, m;
void magicFunc()
{
    cin >> n >> m;
    vector<ll> a(n);
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    ll ans = 0;
    FOR(i, 0, n - 1)
    {
        ll l = i, r = i;
        while (l >= 0 && r < n)
        {
            ll len = r - l + 1;
            if (len % 2 == 1)
            {
                vector<ll> b(a.begin() + l, a.begin() + r + 1);
                sort(b.begin(), b.end());
                ll mid = len / 2;
                if (b[mid] == m)
                {
                    ans++;
                }
            }
            if (l > 0)
            {
                l--;
            }
            else
            {
                r++;
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