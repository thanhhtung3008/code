#include<bits/stdc++.h>
using namespace std;
long long tinh(long long n)
{
    long long ans=0;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ans++;
            if(i!=n/i)
            {
                ans++;
            }
        }
    }
    return ans;
}
ll tinh1(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans++;
        n/=10;
    }
}
int main()
{
    long long n;
    cin >> n;
    ll a[n+1];
    for(long long i=1;i<=n;i++)
    {
        cin >>a[i];
    }
    long long ans=0;
    for(long long i=1;i<=n;i++)
    {
        if(tinh1(a[i])==tinh(a[i]))
        {
            ans++;
        }
    }
    cout << ans;
}

