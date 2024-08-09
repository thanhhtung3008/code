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
string s;
ll n;
void magicFunc()
{
    cin >> s >> n;
    while (n--)
    {
        ll r;
        cin >> r;
        if (r == 1)
        {
            ll y;
            string x;
            cin >> x >> y;
            s.insert(y, x);
            cout << s << endl;
        }
        else
        {
            ll x, y;
            cin >> x >> y;
            s.erase(x, y);
            cout << s << endl;
        }
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