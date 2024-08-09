/*
#include <bits/stdc++.h>
using namespace std;
long long n,a[1000],f[1000],b[1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    cin >> n;
    for(long long i=1;i<=n;i++)
    {
         cin >> a[i];
         f[i]=1;
    }

    //sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++)
            if(a[i]>=a[j])
            {
                 f[i]=max(f[i],f[j]+1);
            }
    //cout << f[n];
    long long ma=f[1];
    for(int i=1;i<=n;i++)
    {
        ma=max(ma,f[i]);
    }
    long long now=ma;
    for(int i=1;i<=now;i++)
    {
        long long res=-1;
        for(int j=1;j<=n;j++)
            if(f[j]==i)
            {
                res=a[j];

            }
        cout << res << " ";

    }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    long long n,s,a[200];
    bool l[200]={0};
    cin >> n >>s;
    for(long long i=1;i<=n;i++)
        cin >>a[i];
    l[0]=1;
    for(int i=1;i<=n;i++)
        for(int t=s;t>=a[i];t--)
            if(l[t-a[i]]==1)
                l[t]=1;
    if(l[s])
        cout << 1;
    else
        cout << 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    string s;
    cin >>s;
    s="@"+s;
    long long l=s.size();
    bool f[l][l];
    memset(f,false,sizeof(f));
    for(long long i=1;i<=l;i++)
        f[i][i]=true;
    long long ans=1;
    for(long long len=2;len<=l;len++)
        for(long long i=1;i<=l-len+1;i++)
        {
            int j=i+len-1;
            if(s[i]==s[j]&&len==2)
                f[i][j]=true;
            else
            {
                f[i][j]=f[i+1][j-1]&& s[i]==s[j];
            }
            if(f[i][j]==true)
                ans=max(ans,len);
        }
    cout << ans << endl;
     for(long long i=1;i<l;i++)
     {
         for(long long j=1;j<l;j++)
            cout << f[i][j] << " ";
        cout << endl;
     }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    long long n,s;
    cin >>n >>s;
    long long w[n+1];
    long long v[n+1];
    for(long long i=1;i<=n;i++)
        cin >> w[i];
    for(long long i=1;i<=n;i++)
        cin >> v[i];
    long long dp[n+1][s+1];
    memset(dp,0,sizeof(dp));
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=s;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=w[i])
                dp[i][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
        }
    cout << dp[n][s] << endl;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=s;j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
}
*/
/*
#include <bits/stdc++.h>
#define fori for(long long i=1;i<=l;i++)
#define forj for(long long j=1;j<=k;j++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    long long q;
    cin >>q;
    while(q--)
    {
        string x,y;
        cin >>x >>y;
        x="@"+x;
        y="@"+y;
        long long l=x.size();
        long long k=y.size();
        long long f[l+1][k+1];
        memset(f,0,sizeof(f));
        fori
            forj
            {
                if(x[i]==y[j])
                    f[i][j]=f[i-1][j-1]+1;
                else
                    f[i][j]=max(f[i-1][j],f[i][j-1]);
            }
        cout <<f[l-1][k-1] << endl;
    }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    long long n,k;
    cin >> k >>n;
    long long a[k+1][n+1];
    for(long long i=1;i<=k;i++)
        for(long long j=1;j<=n;j++)
            cin >>a[i][j];

    long long v[k+1][n+1];
    memset(v,0,sizeof(v));
    for(long long i=1;i<=k;i++)
        for(long long j=1;j<=n;j++)
        {
            if(i<j)
            {
                v[i][j]=max(v[i][j-1],v[i-1][j-1]+a[i][j]);
            }
            if(i==j)
                v[i][j]=v[i-1][j-1]+a[i][j];

        }
    for(long long i=1;i<=k;i++)
    {
        for(long long j=1;j<=n;j++)
            cout << v[i][j] << " ";
        cout <<endl;
    }
    cout << v[k][n];
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    long long n,k;
    cin >> n >>k;
    long long x[n+1],y[k+1];
    for(long long i=1;i<=n;i++)
        cin >> x[i];
    for(long long i=1;i<=k;i++)
        cin >> y[i];
    long long f[k][n],v[k][n];
    memset(f,0,sizeof(f));
    memset(v,0,sizeof(v));
    for(long long i=1;i<=k;i++)
        for(long long j=1;j<=n;j++)
        {
            v[i][j]=abs(x[j]-y[i]);
        }
    for(long long i=1;i<=k;i++)
        for(long long j=1;j<=n;j++)
        {
            if(i==j)
                f[i][j]=f[i-1][j-1]+v[i][j];
            else if(i<j)
                f[i][j]=min(f[i-1][j-1]+v[i][j],f[i][j-1]);
        }
    cout << f[k][n];
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    long long n,k;
    cin >> n >>k;
    long long x[n+1],y[k+1];
    for(long long i=1;i<=n;i++)
        cin >> x[i];
    for(long long i=1;i<=k;i++)
        cin >> y[i];
    sort(x+1,x+1+n);
    sort(y+1,y+1+k);
    long long f[n][k],v[n][k];
    memset(f,0,sizeof(f));
    memset(v,0,sizeof(v));
    for(long long i=1;i<=k;i++)
        for(long long j=1;j<=n;j++)
        {
            v[i][j]=abs(x[j]-y[i]);
        }
    for(long long i=1;i<=k;i++)
        for(long long j=1;j<=n;j++)
        {
            if(i==j)
                f[i][j]=f[i-1][j-1]+v[i][j];
            else if(i<j)
                f[i][j]=min(f[i-1][j-1]+v[i][j],f[i][j-1]);
        }
        for(long long i=1;i<=k;i++)
        {
            for(long long j=1;j<=n;j++)
                cout << f[i][j] << " ";
                cout << endl;
        }
    cout << f[k][n];
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    long long m,n;
    cin >>m >>n;
    long long a[m+1][n+1];
    for(long long i=1;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            cin >>a[i][j];
        }
    long long f[m+1][n+1];
    for(long long j=1;j<=n;j++)
    {
        f[1][j]=a[1][j];
    }
    for(long long i=1;i<m;i++)
    {
        f[i][0]=f[i][n+1]=-100;
    }
    for(long long i=2;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            f[i][j]=max(f[i-1][j],max(f[i-1][j+1],f[i-1][j-1]))+a[i][j];
        }
    for(long long i=1;i<=m;i++)
    {
         for(long long j=1;j<=n;j++)
            cout << f[i][j] << " ";
        cout << endl;
    }

    long long res=0;
    for(long long i=1;i<=n;i++)
        res=max(res,f[m][i]);
    cout << res;
}
