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
map<ll, ll> m;
ll n, x;
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> x;
        m[x]++;
    }
    ll s = 0;
    for (auto i : m)
    {
        if (i.sc < i.ft)
        {
            s += i.sc;
        }
        else if (i.ft < i.sc)
        {
            s += (i.sc - i.ft);
        }
    }
    cout << s;
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