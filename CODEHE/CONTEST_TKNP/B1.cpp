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
ll n, B;
struct hoa
{
    ll p;
    ll c;
};
bool cmp(hoa a, hoa b)
{
    return a.p < b.p;
}
void magicFunc()
{
    cin >> n >> B;
    // ll a[n + 1];
    vector<hoa> hoas(n);
    FOR(i, 0, n - 1)
    {
        cin >> hoas[i].p >> hoas[i].c;
    }
    sort(hoas.begin(), hoas.end(), cmp);
    ll maxg = 0;
    FOR(i, 0, n - 1)
    {
        ll res = min(hoas[i].c, B / hoas[i].p);
        maxg += res;
        B -= res * hoas[i].p;
        if (B <= 0)
            break;
    }
    cout << maxg;
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