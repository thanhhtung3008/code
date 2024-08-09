#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, d;
    cin >> n >> d;
    long long m[n];
    for (long long i = 1; i <= n; i++)
        cin >> m[i];
    long long i = 1, j = n;
    sort(m + 1, m + 1 + n);
    long long dem = 0;
    while (i <= j)
    {
        if (m[j] + m[i] <= d)
        {
            dem++;
            j--;
            i++;
        }
        else
        {
            dem++;
            j--;
        }
    }
    cout << dem << endl;
    return 0;
}
