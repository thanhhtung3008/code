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
ll n, W, a[100001];
ll choose[10001];
ll sum;
vector<ll> myvec;
void solve1()
{
    ll ans = 0;
    FOR(i, 1, n / 2)
    ans += choose[i] * a[i];
    myvec.push_back(ans);
}
void Back1(ll k)
{
    if (k > n / 2)
    {
        solve1();
        return;
    }
    FOR(i, 0, 1)
    {
        choose[k] = i;
        Back1(k + 1);
    }
}
ll bs(ll x)
{
    ll l = 0, r = myvec.size() - 1, res = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (myvec[mid] <= x)
        {
            res = mid + 1;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return res;
}
void solve2()
{
    ll ans = 0;
    FOR(i, n / 2 + 1, n)
    ans += choose[i] * a[i];
    sum += bs(W - ans);
}
void Back2(ll k)
{
    if (k > n)
    {
        solve2();
        return;
    }
    FOR(i, 0, 1)
    {
        choose[k] = i;
        Back2(k + 1);
    }
}

void magicFunc()
{
    cin >> n >> W;
    FOR(i, 1, n)
    cin >> a[i];
    Back1(1);
    sort(myvec.begin(), myvec.end());
    Back2(n / 2 + 1);
    cout << sum;
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