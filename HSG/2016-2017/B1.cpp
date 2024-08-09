/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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
ll tinh(string s)
{
    ll sum = 0;
    FOR(i, 0, s.size() - 1)
    {
        sum += (s[i] - '0');
    }
    return sum;
}
void magicFunc()
{
    string s;
    cin >> s;
    ll ans = 0;
    FOR(i, 1, stoi(s))
    {
        string k = to_string(i);
        if (tinh(k) % k.size() == 0)
        {
            ++ans;
        }
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