/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (int i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
vector<int> a;
int n;
void magicFunc()
{
    cin >> n;
    FOR(i, 1, n)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> f(n + 1, INT_MAX);
    f[0] = INT_MIN;
    int ans = 0;
    for (int x : a)
    {
        int k = lower_bound(f.begin(), f.end(), x) - f.begin();
        f[k] = x;
        ans = max(ans, k);
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