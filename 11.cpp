#include <bits/stdc++.h>
using namespace std;
bool check(int n,int m,int k,int a[])
{
    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
            return false;
        if(a[i]+sum>k)
        {
            cnt++;
            sum=0;
        }
        sum+=a[i];
    }
    if(sum>0)
        cnt++;
    return cnt<=m;
}
int solve(int n,int m,int a[])
{
    int l=1,r=1e7;
    int ans=-1;
    while(l<=r)
    {
        long long m=(r+l)/2;
        if(check(n,m,mid,a)
           {
               ans=m;
               r=m-1;
           }
        else
            l=m+1;
    }
    return ans;
}
int main()
{

}
