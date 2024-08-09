/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n >>m;
    long long a[n+2][m+2];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            cin >> a[i][j];
    long long prefix[n+2][m+2];
    for(long long i=0;i<=n;i++)
        for(long long j=0;j<=m;j++)
        {
            prefix[0][j]=0;
            prefix[i][0]=0;
        }
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            prefix[i][j]=a[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
    /*
    for(long long i=n;i>=1;i--)
        prefix[i][m]=prefix[i][m]-prefix[i-1][m];
    long long s=0;
    for(long long i=1;i<=n;i++)
        s=max(s,prefix[i][m]);
    cout << s;*//*
    for(long long i=1;i<=n;i++)
    {


        for(long long j=1;j<=m;j++)
            cout << prefix[i][j] << " ";
        cout << endl;
}
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n >>m;
    long long a[n+2][m+2];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            cin >> a[i][j];
    long long prefix[n+2][m+2];
    for(long long i=0;i<=n;i++)
        for(long long j=0;j<=m;j++)
        {
            prefix[0][j]=0;
            prefix[i][0]=0;
        }
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            prefix[i][j]=a[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
    for(long long i=1;i<=n;i++)
    {


        for(long long j=1;j<=m;j++)
            cout << prefix[i][j] << " ";
        cout << endl;
}
    cout <<prefix[n-1][m-1];
}

