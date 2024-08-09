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
const ll maxx = 1e7 + 7;
ll n, q;
ll a[maxx];
ll prefix[maxx];
void magicFunc()
{
    cin >> n >> q;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    FOR(i, 1, n)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        ll x1, x2;
        cin >> x1 >> x2;
        cout << prefix[x2] - prefix[x1 - 1] << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    magicFunc();
    return 0;
}