#include <bits/stdc++.h>
using namespace std;
long long n,a[100000],b[100000];
//ifstream fi("test.inp");
//ofstream fo("test.out");
void dc(long long &a, long long &b)
{
    long long tam;
    tam = a;
    a = b;
    b = tam;
}
void nhap()
{
    cin >>n;
}
void nhapmang(long long a[],long long n)
{
    for(long long i=1;i<=n;i++)
    {
        cin >>a[i];
        b[i]=a[i];
    }

}
void xapxep(long long b[],long long n)
{
    for (long long i = 1; i <n; i++)
        for (long long j = i + 1; j <=n; j++)
            if (b[i] > b[j])
                dc(b[i], b[j]);
}
long long xuli(long long a[],long long n)
{
    long long dem=0;
    for(int i=2;i<=n;i+=2)
        for(int j=2;j<=n;j+=2)
            if(a[i]==b[j]&&a[i-1]==b[j-1])
            {
                dem++;
                break;
            }


    return dem;
}
int main()
{
    nhap();
    nhapmang(a,n*2);
    xapxep(a,n*2);
    cout << xuli(a,n*2);



}
