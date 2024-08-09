#include <bits/stdc++.h>

using namespace std;
bool nt(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    long long range = sqrt(n);
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 1; i <= range; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    nt(n);
    return 0;
}
