#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a[100005];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    ll ans = 0;

    for (int i = n; i >= 3; i--)
    {
        int l = 1;
        int r = i - 1;
        while (l < r)
        {
            if (a[l] + a[r] == a[i])
            {
                ans += 2;
                l++; 
            }
            else if (a[l] + a[r] < a[i])
            {
                l++;
            }
            else
                r--;
        }
    }
    cout << ans << endl;
}
