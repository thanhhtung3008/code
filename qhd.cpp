#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int)A.size()
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof(a))
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int N = 150, inf = N * N * N;

int n, m, F[N][N], a[N][N], ans = -inf;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    cin >> n >> m;
    FOR(i, 1, m)
    F[0][i] = F[n + 1][i] = -inf;
    FOR(i, 1, n)
    FOR(j, 1, m)
    cin >> a[i][j];
    FOR(j, 1, m)
    FOR(i, 1, n)
    F[i][j] = a[i][j] + max(F[i - 1][j - 1], max(F[i][j - 1], F[i + 1][j - 1]));
    FOR(i, 1, n)
    ans = max(ans, F[i][m]);
    cout << ans << endl;
    ll mm = -inf;
    FOR(i, 1, n)
    mm = max(mm, a[i][m]);
    FOR(j, 1, n)
    {
        FOR(i, 1, m)
        cout << F[j][i] << " ";
        cout << endl;
    }
    long long path[10001] = {0};
    path[m] = mm;
    FOR(j, 1, n)
    {
        FOR(i, 1, m)
        path;
    }
    return 0;
}