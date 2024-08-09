/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 46;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
ll f[maxn];
void calc()
{
    f[0] = 1;
    f[1] = 1;
    FOR(i, 2, maxn - 1)
    {
        f[i] = f[i - 2] + f[i - 1];
    }
}
char tinh(ll n, ll k)
{
    if (n == 0)
    {
        return 'a';
    }
    if (n == 1)
    {
        return 'b';
    }
    if (k <= f[n - 2])
    {
        return tinh(n - 2, k);
    }
    else
    {
        return tinh(n - 1, k - f[n - 2]);
    }
}
void magicFunc()
{
    ll t;
    cin >> t;
    calc();
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << tinh(n, k) << endl;
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
