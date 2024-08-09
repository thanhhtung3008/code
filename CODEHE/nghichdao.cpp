#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        long long s = 0;
        long long t = a[i];
        while (t > 0)
        {
            long long k = t % 10;
            s = s * 10 + k;
            t /= 10;
        }
        if (s == a[i])
        {
            cout << a[i] << endl;
        }
    }
}