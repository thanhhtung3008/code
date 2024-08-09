/*
#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[1005][1005], f[1005][1005];
int main()
{
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    cin>>m>>n;
    for (int i = 1; i<=m; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];

    for (int i = 1; i<=m; i++)
        for (int j=1; j<=n; j++)
            f[i][j]= a[i][j] + f[i-1][j] + f[i][j-1] - f[i-1][j-1];
    for (int i = 1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
            cout << f[i][j] << " ";
        cout << endl;
    }

    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
long long t(long long n)
{
    long long f[n];
    if(n==1)
        return 2;
    else if(n==2)
        return 3;
    else
    {
        f[1]=2;
        f[2]=3;
        for(long long i=3;i<=n;i++)
            f[i]=f[i-1]+f[i-2];}
    return f[n];
}
int main()
{
    int n;
    cin >>n;
    cout << t(n);
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long k=0;
    int n;
    cin >>n;
    int a[n];
    for(long long i=0;i<n;i++)
        cin >>a[i];
    long long f[n];
    for(long long i=0;i<n;i++)
        f[i]=1;
    for(long long i=0;i<n;i++)
        for(long long j=0;j<i;j++)
        {
             if(a[i]>a[j])
                f[i]=max(f[i],f[j]+1);
        }
    long long maxn;
    long long t[n+1];
    for (int i=1;i<=n;i++)
    {
        maxn=0;
        t[i]=0;
        for(long long j=i-1;j>=1;j--)
            if(a[j]<a[i])
                if(f[j]>maxn)
                {
                    maxn=f[j];
                    t[i]=j;
                }

        f[i]=maxn+1;
    }
}
*/
#include <bits/stdc++.h>
#define fori for(int i=1;i<=m;i++)
#define forj for(int j=1;j<n;j++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long m,n;
    cin >> m>>n;
    long long a[m+1],b[n+1];
    for(long long i=1;i<=m;i++)
        cin >> a[i];
    for(long long i=1;i<=n;i++)
        cin >> b[i];
    long long f[m+1][n+1];
    memset(f,0,sizeof(f));
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            if(a[i]==b[j])
                f[i][j]=f[i-1][j-1]+1;
            else
                f[i][j]=max(f[i-1][j],f[i][j-1]);
        }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cout << f[i][j] << " ";
        cout << endl;
    }

    for(int i=m;i>=1;i--)
        for(int j=n;j>=1;j--)
            if(a[i]==b[j])
            {
                f[i][j]=f[i-1][j-1]+1;
            }
            else
                f[i][j]=f[i-1][j];
    for(long long i=1;i<=m;i++)
    {
        for(long long j=1;j<=n;j++)
            cout << f[i][j] << " ";
        cout << endl;

    }

}
