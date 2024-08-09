/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */
#include <bits/stdc++.h>
using namespace std;
long long n;
bool check[1000001];
void snt()
{
    for (long long i = 0; i <= 1000001; i++)
        check[i] = true;
    check[0] = false;
    check[1] = false;
    for (long long i = 2; i <= 1000001; i++)
        if (check[i])
            for (long long j = 2 * i; j <= 1000001; j += i)
                check[j] = false;
}
void magicFunc()
{
    cin >> n;
    snt();
    for (long long i = 2; i <= n; i++)
        if (check[i] == true && n % i == 0)
            cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("UOCNT.inp", "r", stdin);
    freopen("UOCNT.OUT", "w", stdout);
    magicFunc();
    return 0;
}