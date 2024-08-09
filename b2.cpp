#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, l, r) for (int i = (l); i <= (r); i++)
#define Fo(i, l, r, c) for (int i = (l); i <= (r); i += (c))
#define fod(i, l, r) for (int i = (l); i >= (r); i--)
#define Fod(i, l, r) for (int i = (l); i >= (r); i -= (c))
// #define vec vector
// #define pb push_back

int n, x, y;
int q;
int a[200000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
    }
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        a[x] = y;
        ll res = 0;
        fo(i, 1, n - 1)
        {
            fo(j, i + 1, n)
            {
                if (a[i] > a[j])
                    res++;
            }
        }
        cout << res << endl;
    }
}