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
pair<ll, ll> t[100005];
vector<ll> a;
vector<ll> b;
ll n;
bool check(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return (a.first < b.first);
}
void magicFunc()
{
    cin >> n;
    FOR(i, 0, n - 1)
    {
        cin >> t[i].first;
    }
    FOR(i, 0, n - 1)
    {
        cin >> t[i].second;
    }
    sort(t, t + n, check);
    FOR(i, 0, n - 1)
    {
        cout << t[i].first << " " << t[i].second << endl;
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