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

int query(const vector<long long> &bit, long long idx)
{
    int ans = 0;
    while (idx > 0)
    {
        ans += bit[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}
void update(const vector<long long> &bit, long long idx, long long value)
{
    int n = bit.end() - bit.begin() + 1;
    while (idx <= n)
    {
        bit[idx] += value;
        idx += (idx & (-idx));
    }
}
long long calculateLastChance(const vector<long long> &A, const vector<long long> &bit, long long n)
{
    long long lastChance = 0;
    for (long long i = 1; i <= n; ++i)
    {
        long long count = query(bit, n) - query(bit, A[i]);
        lastChance += count;
        update(bit, A[i], 1);
    }
    return lastChance;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long n, Q;
    cin >> n;
    vector<long long> A(n + 1);
    vector<long long> bit(50001, 0);
    for (long long i = 1; i <= n; ++i)
    {
        cin >> A[i];
    }

    long long lastChance = calculateLastChance(A, bit, n);
    cout << lastChance << endl;

    cin >> Q;
    while (Q--)
    {
        long long X, Y;
        cin >> X >> Y;
        update(bit, A[X], -1);
        A[X] = Y;
        update(bit, A[X], 1);
        lastChance = calculateLastChance(A, bit, n);
        cout << lastChance << endl;
    }

    return 0;
}
