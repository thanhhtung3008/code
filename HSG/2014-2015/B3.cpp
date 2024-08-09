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
vector<ll> a;
bool check(ll a)
{
    if (a < 2)
    {
        return false;
    }
    if (a == 2 || a == 3)
    {
        return true;
    }
    if (a % 2 == 0 || a % 3 == 0)
    {
        return false;
    }
    for (ll i = 5; i * i <= a; i += 6)
    {
        if (a % i == 0 || a % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void magicFunc()
{
    cin >> s;
    ll n = s.size();
    FOR(i, 0, n - 1)
    {
        ll v = 0;
        if (s[i] > '0' && s[i] <= '9')
        {
            FOR(j, i, n - 1)
            {
                if (s[j] < '0' || s[j] > '9')
                {
                    break;
                }
                else
                {
                    v = v * 10 + (s[j] - 48);
                    if (check(v))
                    {
                        a.push_back(v);
                    }
                }
            }
        }
    }
    cout << a.size() << endl;
    for (auto i : a)
    {
        cout << i << " ";
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