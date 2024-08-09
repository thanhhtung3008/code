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
void magicFunc()
{
    ll t, test = 1;
    cin >> t;
    while (t--)
    {
        vector<pair<ll, ll>> p;
        ll n, r;
        cin >> n >> r;
        FOR(k, 0, r - 1)
        {
            ll i, c;
            cin >> i >> c;
            p.push_back(make_pair(i, c));
        }
        // sort(p.begin(), p.end());
        ll check = 0;
        FOR(k, 0, p.size() - 1)
        {
            if (p[k].ft == p[k + 1].ft && p[k].sc == p[k + 1].sc)
            {
                check = 1;
                break;
            }
        }
        cout << "Scenario #" << test << ": ";
        if (check == 0)
            cout << "possible" << "\n";
        else
            cout << "impossible" << " \n";
        test++;
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