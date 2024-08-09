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
ll n, k, a[maxn];
bool ok;
void ktao()
{
    FOR(i, 1, n)
    {
        a[i] = i;
    }
}
void sinh()
{
    ll i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = false;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
void magicFunc()
{
    cin >> n;
    ktao();
    ok = true;
    while (ok)
    {
        FOR(i, 1, n)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    // magicFunc();
    /*
    cin >> n;
    ktao();
    do
    {
        FOR(i, 1, n)
        {
            cout << a[i];
        }
        cout << endl;
    } while (next_permutation(a + 1, a + n + 1));
    */
    cin >> n;
    FOR(i, 1, n)
    {
        a[i] = n - i + 1;
    }
    do
    {
        FOR(i, 1, n)
        {
            cout << a[i];
        }
        cout << endl;
    } while (prev_permutation(a + 1, a + n + 1));
    return 0;
}