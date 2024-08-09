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
ll a, b, c;
ll max3(ll a, ll b, ll c)
{
    return max(a, max(b, c));
}
ll min3(ll a, ll b, ll c)
{
    return min(a, min(b, c));
}
void magicFunc()
{
    cin >> a >> b >> c;
    cout << min3(a, b, c) << " ";
    cout << max3(a, b, c);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    magicFunc();
    return 0;
}