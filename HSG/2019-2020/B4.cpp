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
ll n, k;
const int MAXN = 1000006;
vector<int> f(MAXN, 0);
void sang()
{
    f[0] = 0;
    f[1] = 0;
    for (int i = 2; i <= sqrt(MAXN); i++)
    {
        if (f[i] == 0)
        {
            for (int j = i; j <= MAXN; j += i)
            {
                f[j]++;
            }
        }
    }
}

void magicFunc()
{
    sang();
    cin >> n >> k;
    ll a[n + 1];
    vector<ll> p;
    FOR(i, 1, n)
    {
        cin >> a[i];
        if (f[a[i]] == k)
        {
            p.push_back(i);
        }
    }
    for (auto i : p)
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