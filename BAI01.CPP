#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("BAI01.inp");
ofstream fo("BAI01.out");
long long n, a[100000], b[100000];
void dc(long long &a, long long &b)
{
    long long tam;
    tam = a;
    a = b;
    b = tam;
}
void sapxep(long long a[], long long n)
{
    for (long long i = 1; i < n; i++)
        for (long long j = i + 1; j <= n; j++)
            if (a[i] < a[j])
                dc(a[i], a[j]);
}
void nhap()
{
    fi >> n;
    for (long long i = 1; i <= n; i++)
        fi >> a[i];
}
void xuli(long long a[], long long n)
{
    long long m = 1;
    for (long long i = 1; i <= n; i++)
    {
        if (a[i] == a[i - 1])
            continue;
        else
        {
            b[m] = a[i];
            m++;
        }
    }
    for (long long i = 1; i < m; i++)
        fo << b[i] << " ";
}
int main()
{
    nhap();
    sapxep(a, n);
    xuli(a, n);
}
