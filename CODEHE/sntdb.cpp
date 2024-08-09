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
bool check[10000007];
void snt(long long n)
{
    FOR(i, 0, n)
    {
        check[i] = true;
    }
    check[0] = check[1] = false;
    FOR(i, 2, sqrt(n))
    {
        if (check[i])
        {
            for (long long j = i * i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }
}
void magicFunc()
{
    ll n;
    cin >> n;
    ll l = sqrt(n);
    snt(l);
    ll ans = 0;
    for (long long i = 2; i <= l; i++)
    {
        if (check[i] && i * i <= n)
        {
            ++ans;
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