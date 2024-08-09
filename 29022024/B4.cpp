#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
pair<ll, ll> a[100009];
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.second > b.second;
}
bool check(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.first > b.first;
}
void magicFunc()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + n + 1, comp);
    sort(a + 1, a + n + 1, check);
    cout << min(abs(a[n].first - a[1].first), abs(a[n].second - a[1].second));
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