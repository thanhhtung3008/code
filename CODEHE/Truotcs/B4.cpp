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
bool check()
{
    set<ll> s;
    FOR(i, 1, k)
    {
        if (s.count(a[i]))
            return true;
        s.insert(a[i]);
    }
    FOR(i, k + 1, n)
    {
        s.erase(a[i - k]);
        if (s.count(a[i]))
            return true;
        s.insert(a[i]);
    }
    return false;
}
void magicFunc()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        FOR(i, 1, n)
        {
            cin >> a[i];
        }
        if (check())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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