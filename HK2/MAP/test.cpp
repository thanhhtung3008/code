#include <bits/stdc++.h>
using namespace std;
int m, n;

int a[1001][1001];
void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
}
bool check(int n)
{
    if (n <= 1)
        return false;
    if (sqrt(n) * sqrt(n) == n)
        return 1;
    return 0;
}
void xuly()
{
    long long ans = 0;
    int mini = 1001;
    for (int i = 1; i <= n; i++)
    {
        set<int> s;
        for (int j = 1; j <= m; j++)
        {
            if (check(a[i][j]) == 1)
            {
                s.insert(a[i][j]);
            }
        }
        if (s.size() < mini)
        {
            mini = s.size();
            ans = i;
        }
    }
    cout << ans;
}
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    nhap();
    xuly();
}