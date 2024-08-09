#include <bits/stdc++.h>
using namespace std;
void cd(long long n)
{
    if (n == 1 || n == 0)
    {
        cout << n;
        return;
    }
    cd(n / 2);
    cout << n % 2;
}
int main()
{
    long long n;
    n = 1390210234234;
    cd(n);
}