/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */
#include <bits/stdc++.h>
#define nmax 1000009
using namespace std;
long long n;
bool check[nmax];
vector<long long> v;
void snt()
{
    for (long long i = 0; i <= nmax; i++)
        check[i] = true;
    check[0] = false;
    check[1] = false;
    for (long long i = 2; i <= sqrt(nmax); i++)
        if (check[i])
        {
            v.push_back(i);
            for (long long j = i; j <= nmax / i; j++)
                check[i * j] = false;
        }
}
void magicFunc()
{
    long long dem = 0, x;
    snt();
    long long t;
    cin >> t;
    long long k = v.size();
    while (t--)
    {
        cin >> n;
        dem = 0;
        for (long long i = 0; i < k; i++)
        {
            if (v[i] * v[i] > n)
                break;
            for (long long j = 0; j < k; j++)
            {
                x = v[i] * v[i] + v[j] * v[j] * v[j];
                if (x > n)
                    break;
                if (check[n - x] == true)
                    dem++;
            }
        }
        cout << dem << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.inp", "r", stdin);
    // freopen("output.OUT", "w", stdout);
    magicFunc();
    return 0;
}