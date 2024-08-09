#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n;
    cin >>n;
    pair<long long,long long> a[n+1];
    long long x,y;
    for(long long i=1;i<=n;i++)
    {
        cin >>x >> y;
        a[i]=make_pair(x,y);
    }

    for(long long i=1;i<n;i++)
        for(long long j=i+1;j<=n;j++)
            if(a[i].first>a[j].first)
            {
                a[i].swap(a[j]);
            }
    for(long long i=1;i<=n;i++)
        cout << a[i].first << " " << a[i].second<< endl;
}
