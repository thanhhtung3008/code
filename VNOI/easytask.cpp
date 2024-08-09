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
ll n, q;
ll a[maxn];
ll prefix[maxn];
bool check[maxn] = {false};
void snt()
{

    FOR(i, 1, maxn)
    {
        check[i] = true;
    }
    check[0] = check[1] = false;
    FOR(i, 2, sqrt(maxn))
    {
        if (check[i])
            for (ll j = 2 * i; j <= maxn; j += i)
            {
                check[j] = false;
            }
    }
}
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    FOR(i, 1, n)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    snt();
    ll ans = INT_MIN;
    FOR(i, 1, n)
    {
        FOR(j, i + 1, n)
        {
            if (check[i] && check[j])
            {
                ans = max(ans, prefix[j] - prefix[i - 1]);
                // cout << a[i] << " " << a[j] << " " << ans << endl;
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