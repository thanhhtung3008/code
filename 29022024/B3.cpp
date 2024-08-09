#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
void magicFunc()
{
    cin >> n >> k;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    ll t = max(a[n] - k, (long long)0);
    ll s = t + 1;
    for (long long i = 1; i < n; i++)
        s += a[i];
    cout << s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    magicFunc();
}