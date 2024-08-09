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
int choose[100001];
ll ans;
void calc()
{
    ll sum = 0;
    set<ll> distinct;
    FOR(i, 1, n)
    if (choose[i])
    {
        sum += a[i];
        distinct.insert(a[i]);
    }
    ans = sum - distinct.size();
}
void try(ll k)
{
    if (k > n)
    {
        calc;
        return;
    }
    FOR(i, 0, 1)
    {
        chosen[k] = 1;
        try(k + 1);
    }
}
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    cin >> a[i];
    Back(1);
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "w", stdin);
    freopen("output.out", "r", stdout);
    magicFunc();
    return 0;
}