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
const ll maxx = 1e5 + 5;
ll n, d;
ll m[maxx];
void magicFunc()
{
    while (cin >> n >> d)
    {
        FOR(i, 1, n)
        {
            cin >> m[i];
        }
        sort(m + 1, m + n + 1);
        ll i = 1, j = n, ans = 0;
        while (i <= j)
        {
            if (m[j] + m[i] <= d)
            {
                ans++;
                j--;
                i++;
            }
            else
            {
                ans++;
                j--;
            }
        }
        cout << ans << "\n";
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