#include <bits/stdc++.h>
using namespace std;
int n,cnt,u;
int a[100];
void kt()
{
   cnt=1;
   a[1]=n;
}
void sinh()
{
    int i=cnt;
    while(i>=1&&a[i]==1)
    {
        --i;
    }
    if(i==0)
    {
        u=0;
    }
    else
    {
        //di tim ptu lon hon a[i] trong doan [i+1,n]
        a[i]--;
        int d=cnt-i+1;
        cnt=i;
        int q=d/a[i];
        int p=d%a[i];
        if(q)
        {
            for(int j=1;j<=q;j++)
            {
                ++cnt;
                a[cnt]=a[i];
            }
        }
        if(p)
        {
            ++cnt;
            a[cnt]=p;
        }
    }
}
int main ()
{
    ifstream cin("test.inp");
    ofstream cout("test.out");
    cin>>n;
    kt();
    u=1;
    while(u)
    {
       for(int i=1;i<=cnt;++i)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
       sinh();
    }
    return 0;
}

