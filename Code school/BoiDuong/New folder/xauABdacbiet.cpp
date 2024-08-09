#include <bits/stdc++.h>
using namespace std;
ifstream fi("b4.inp");
ofstream fo("b4.out");
int n,k,ok;
string a;
void ktao()
{
    for(int i=1;i<=n;i++)
        a[i]='B';
}
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
    while(i>=1&&a[i]=='B')
    {
        a[i]='A';
        --i;
    }
    if(i==0)
        ok=0;
    else
        a[i]='B';
}
bool check()
{
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        dem+=(a[i]-65);
    }
    return dem==k;
}
int main()
{
        fi >>n>>k;
        ok=1;
        while(ok)
        {
            if(check())
                xuat();
            sinh();
        }
}


