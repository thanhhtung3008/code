#include <iostream>
#include <fstream>
using namespace std;
long long n,a[1000],b[100000],x,maxn=1,minn;
ifstream fi("BAI02.inp");
ofstream fo("BAI02.out");
void nhap()
{
    fi >>n;
    for(long long i=1;i<=n;i++)
    {
        fi >>x;
        a[x]++;
        if(minn>x)
            minn=x;
        if(maxn<x)
            maxn=x;
    }
}
void dc(long long &a,long long &b)
{
    long long tam;
    tam=a;
    a=b;
    b=tam;
}
void sapxep(long long a[],long long n)
{
    for(long long i=1;i<n;i++)
        for(long long j=i+1;j<=n;j++)
            if(a[i]>a[j])
                dc(a[i],a[j]);
}
void xuli(long long a[],long long n)
{
    long long maxnn=1,m=1;
    for(long long i=minn;i<=maxn;i++)
    {
        if(a[i]>=maxnn)
        {
            maxnn=a[i];
        }
    }
    for(long long i=minn;i<=maxn;i++)
    {
        if(a[i]==maxnn)
        {
            b[m]=i;
            m++;
        }
    }
    sapxep(b,m-1);
    fo << b[1];
}
int main()
{
    nhap();
    xuli(a,minn+maxn);
}
