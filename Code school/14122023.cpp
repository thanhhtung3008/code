#include <iostream>
#include <cmath>
using namespace std;
long long n,a[10000];
void dc(long long &a,long long &b)
{
    long long tam;
    tam =a;
    a=b;
    b=tam;
}
void nhap()
{
    cin >>n;
}
void nhapmang(long long a[],long long n)
{
    for(long long i=1;i<=n;i++)
        cin >> a[i];
}
void xapxep(long long a[],long long n)
{
    for(long long i=1;i<n;i++)
        for(long long j=i+1;j<=n;j++)
            if(a[i]>a[j])
                dc(a[i],a[j]);
}
void xuli(long long a[],long long n)
{
    long long minn=a[2]-a[1];
    for(int i=3;i<=n;i++)
    {
        if(abs(a[i]-a[i-1])<minn)
                minn=abs(a[i]-a[i-1]);
    }
    cout << minn;
}
int main()
{
    nhap();
    nhapmang(a,n);
    xapxep(a,n);
    xuli(a,n);
}

