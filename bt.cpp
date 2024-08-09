/*
#include <bits/stdc++.h>
using namespace std;
long long a[1001],n,x;
long long tknp(long long a[],long long n,long long l,long long r,long long x)
{
    sort(a+1,a+n+1);
    while(l<=r)

        {
            long long m=(r+l)/2;
            if(a[m]>x)
            {
                r=m-1;
            }
            else if(a[m]==x)
                return m;
            else
                l=m+1;
        }
    return -1;
}
int main()
{
    cin >> n >>x;
    for(long long i=1;i<=n;i++)
        cin >>a[i];
    cout << tknp(a,n,1,n,x);
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
long long a[1001],b[1001],n,x;
void xort(long long a[],long long b[],long long n)
{
    for(long long i=1;i<=n-1;i++)
        for(long long j=i+1;j<=n;j++)
            if(a[i]>=a[j])
        {
            swap(a[i],a[j]);
            swap(b[i],b[j]);
        }
}
long long tknp(long long a[],long long b[],long long n,long long l,long long r,long long x)
{
    while(l<=r)

        {
            long long m=(r+l)/2;
            if(a[m]>x)
            {
                r=m-1;
            }
            else if(a[m]==x)
                return b[m];
            else
                l=m+1;
        }
    return -1;
}
int main()
{
    cin >> n >>x;
    for(long long i=1;i<=n;i++)
    {
         cin >>a[i];
         b[i]=i;
    }
        xort(a,b,n);
    cout << tknp(a,b,n,1,n,x);
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
long long a[1001],b[1001],n,x;
void xort(long long a[],long long n)
{
    for(long long i=1;i<=n-1;i++)
        for(long long j=i+1;j<=n;j++)
            if(a[i]>=a[j])
        {
            swap(a[i],a[j]);
        }
}
long long tknp(long long a[],long long n,long long l,long long r,long long x)
{
        xort(a,n);
    long long res=-1;
    while(l<=r)

        {
            long long m=(r+l)/2;
            if(a[m]<x)
            {
                l=m+1;
                res=a[m];
            }
            else
                r=m-1;

        }
    return res;
}
int main()
{
    cin >> n >>x;
    for(long long i=1;i<=n;i++)
    {
         cin >>a[i];
    }

    cout << tknp(a,n,1,n,x);
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
long long a[1001],b[1001],n,x;
void xort(long long a[],long long n)
{
    for(long long i=1;i<=n-1;i++)
        for(long long j=i+1;j<=n;j++)
            if(a[i]>=a[j])
        {
            swap(a[i],a[j]);
        }
}
long long tknp(long long a[],long long n,long long l,long long r,long long x)
{
        xort(a,n);
    long long res=-1;
    while(l<=r)

        {
            long long m=(r+l)/2;
            if(a[m]>x)
            {
                r=m-1;
                res=a[m];
            }
            else
                l=m+1;

        }
    return res;
}
int main()
{
    cin >> n >>x;
    for(long long i=1;i<=n;i++)
    {
         cin >>a[i];
    }

    cout << tknp(a,n,1,n,x);
}
*/
#include <bits/stdc++.h>
using namespace std;
long long n;
char a[1000];
long long tknp(char a[],long long n,long long l,long long r)
{
    long long res=0;
    while(l<=r)

        {
            long long m=(r+l)/2;
            if(a[m]=='0')
            {
                l=m+1;
                res=m;
            }
            else
                r=m-1;

        }
    return res;
}
int main()
{
    n=0;
    while(cin >>a[n])
    {
        n++;
    }

    cout << tknp(a,n-1,0,n-1);
}

