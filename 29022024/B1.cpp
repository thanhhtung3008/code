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
ll n;
void magicFunc()
{
    cin >> n;
    vector<pair<ll, ll>> points(n);
    FOR(i, 0, n - 1)
    cin >> points[i].first >> points[i].second;
    unordered_map<ll, ll> demx;
    unordered_map<ll, ll> demy;
    ll result = 0;
    FOR(i, 0, n - 1)
    {
        demx[points[i].first]++;
        demy[points[i].second]++;
    }
    FOR(i, 0, n - 1)
    result += (demx[points[i].first] - 1) * (demy[points[i].second] - 1);
    cout << result;
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