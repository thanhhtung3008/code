#include <bits/stdc++.h>
using namespace std;
/*
long long n,a[1000],maxn=0,minn=1000;
long long lon(long long a,long long b)
{

    if (a>b)
        return a;
    return b;
}
long long nho(long long a,long long b)
{

    if (a>b)
        return b;
    return a;
}
void nhap()
{
    cin >>n;
    long long x;
    for(long long i=1;i<=n;i++)
    {
        cin >>x;
        a[x]++;
        maxn=max(maxn,x);
        minn=min(minn,x);
    }
}
long long xuli(long long a[],long long minn,long long maxn)
{
    long long t,maxnn=1;
    for(long long i=minn;i<=maxn;i++){
        if(a[i]>=maxnn)
        {
            t=i;
            maxnn=a[i];
        }}
    return t;
}
int main()
{
    nhap();
    cout << xuli(a,minn,maxn);
}
*/
/*
int main()
{
    long long n,maxn=-1000,minn=1000;
    cin >>n;
    long long a[1000];
    for(long long i=1;i<=n;i++)
    {
        cin >>a[i];
    }
    sort(a+1,a+1+n);
    long long t=0,b[1000],m=0;;
    for(long long i=1;i<=n;i++)
    {
        bool check =true;
        for(long long j=1;j<=n;j++)
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    check=false;
                    break;
                }
            }
        if(check==true)
        {
            b[m]=a[i];
            m++;
            t=1;
        }
    }
    if(t==1)
        for(long long i=0;i<m;i++)
            cout << b[i];


}
*/
string n;
long long nhithap(string n)
{
    long long t=0;
    for(long long i=n.size()-1;i>=0;i--)
        t+=((n[i]-48)*pow(2,n.size()-1-i));
    return t;
}
string thaphexa(long long a)
{
    string res="";
    while(a!=0)
    {
        long long t=a%16;
        if(t>=10&&t<=15)
            res=char(t+55)+res;
        else
            res=char(t+48)+res;
        a/=16;
    }
    return res;
}
int main()
{
    cin >>n;
    cout <<thaphexa(nhithap(n));
}
