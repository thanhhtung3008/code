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
bool check[50001];
ll n, dp[50001], a[50001];
void snt()
{
    FOR(i, 1, 50001)
    {
        check[i] = true;
    }
    check[0] = check[1] = false;
    FOR(i, 2, sqrt(50001))
    {
        if (check[i])
        {
            for (ll j = i * i; j <= 50001; j += i)
                check[j] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    snt();
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
        if (a[i] > 0 && check[i])
            a[i] = 0;
        dp[i] = a[i] + dp[i - 1];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << dp[y] - dp[x - 1] << endl;
    }
    return 0;
}
