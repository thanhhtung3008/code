/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */
#include <bits/stdc++.h>
using namespace std;
long long n;
long long sgnt(long long n)
{
    vector<long long> q;
    if (n == 0 || n == 1)
        return 0;
    for (long long i = 2; i < n; i++)
        if (n % i == 0)
            q.push_back(i);
    return q.size();
}
void magicFunc()
{
    cin >> n;
    long long k = n;
    while (sgnt(k) != 1)
        k++;
    cout << k;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GANNT.inp", "r", stdin);
    freopen("GANNT.out", "w", stdout);
    magicFunc();
    return 0;
}