#include <bits/stdc++.h>
using namespace std;
void dc(long long &a, long long &b)
{
    long long tam;
    tam = a;
    a = b;
    b = tam;
}
int main()
{

    long long n;
    cin >> n;
    long long a[10000], x;
    long long maxn, minn;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[x]++;
        maxn = max(maxn, x);
        minn = min(minn, x);
    }

    long long b[maxn+minn], m = 1;
    for (int i = minn; i <= maxn; i++)
        if (a[i] == 1)
        {
            b[m] = i;
            m++;
        }
    cout << m - 1 << endl;
    for (long long i = 1; i < m - 1; i++)
        for (long long j = i + 1; j < m; j++)
            if (b[i] < b[j])
                dc(b[i], b[j]);
    for (long long i = 1; i < m; i++)
        cout << b[i] << " ";*/
}

