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
ll t, n, k, a[maxn];
void magicFunc()
{
    cin >> t;
    while (t--)
    {
        ll d = 0, cnt = 0;
        cin >> n >> k;
        FOR(i, 1, n)
        {
            cin >> a[i];
            if (a[i] <= k)
                ++d; // d=3
        }
        FOR(i, 1, d)
        {
            if (a[i] <= k)
                cnt++; // cnt=1
        }
        ll ans = cnt;
        FOR(i, d + 1, n)
        {
            if (a[i - d] <= k)
                cnt--;
            if (a[i] <= k)
                cnt++;
            ans = max(cnt, ans);
        }
        cout << d - ans << endl;
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