#include <bits/stdc++.h>
using namespace std;
ifstream fi("b3.inp");
ofstream fo("b3.out");
int n,k,a[1009],ok;
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        fo << a[i];
    }
    fo << endl;
}
void sinh()
{
    int i=n;
    while(i>=1&&a[i]==1)
    {
        a[i]=0;
        --i;
    }
    if(i==0)
        ok=0;
    else
        a[i]=1;
}
bool check()
{
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        dem+=a[i];
    }
    return dem==k;
}
int main()
{
    int t;
    fi >>t;
    while(t>0)
    {
        fi >>n>>k;
        ok=1;
        while(ok)
        {
            if(check())
                xuat();
            sinh();
        }
        t--;
    }
}

