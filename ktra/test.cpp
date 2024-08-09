
#include <bits/stdc++.h>
using namespace std;
bool check[100001];
string n;
void sangnt()
{
    for (long long i = 0; i < 100001; i++)
        check[i] = true;
    check[0] = false;
    check[1] = false;
    for (long long i = 2; i < 100001; i++)
        if (check[i] == true)
            for (long long j = 2 * i; j < 100001; j += i)
                check[j] = false;
}
long long t(string n)
{
    long long s = 0;
    for (long long i = 0; i < n.size(); i++)
    {
        s = s * 10 + (n[i] - '0');
        if (n[i] - '0' < 0 || n[i] - '0' > 9)
            return s;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n;
    long long f[n.size()];
    for (long long i = 0; i <= n.size(); i++)
        f[i] = 0;
    sangnt();
    long long dem = 0;
    for (long long i = 0; i < n.size(); i++)
    {
        f[i] = f[i - 1];
        if (n[i] - '0' < 0 || n[i] - '0' > 9)
            continue;
        for (long long j = i; j >= 0; j--)
        {
            if (n[i] - '0' < 0 || n[i] - '0' > 9)
                break;
            string k = n.substr(i, i - j + 1);
            if (check[t(k)] == true)
            {
                f[i]++;
                cout << f[i] << " ";
                cout << k << " ";
            }
        }
    }
}
