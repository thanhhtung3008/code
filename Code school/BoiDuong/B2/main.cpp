/*

#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
int main()
{
    ll n,k;
    cin >> n >>k;
    int a[n];
    int sum[n];
    long long maxn=0;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]+=a[i-1];
        sum[i]=sum[i-1]+a[i];
    }

    for(int i=0;i<n;i++)
        //maxn=max(maxn,sum[i]-sum[i-k]);
        maxn=max(maxn,(a[i+k-1]-a[i]));
    cout << maxn;
}
*/
/*
int main()
{
    //ifstream cin("input.inp");
    //ofstream cout("output.out");
    int n,m;
    cin >> n >>m;
    int a[n][m],s[n][m];
    int v1,v2,u1,u2;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;i<=m;i++)
        {
            cin >> a[i][j];
        }
    }


    cin >> v1 >> u1 >> v2 >> u2;
    for (int i=1;i<=v2;i++)
    {
        for (int j=1;i<=u2;i++)
        {
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
            cout << s[i][j] << " ";
        }
        cout << endl;
    }



}
*/

#include<bits/stdc++.h>

#define Nmax 1000000

using namespace std;
long long ar[100][100],s[100][100];

long long res=0;

long long n,m,k;
int tinhs(int a,int b)
{
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+ar[i][j];
        }
    }
    return s[a][b];
}


int main ()

{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    //ifstream cin("input.inp");

    //ofstream cout("output.out");

    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>ar[i][j];
        }
    }
    int u1,u2,v1,v2;
    cin >> u2 >> v2;
    cout << tinhs(u2,v2);
    return 0;

}


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,q;
    cin >> n>>m>>q;
    int a[n][m],s[n][m];
    for(int i=1;i<=n;i++)
        for(int j=1;i<=m;j++)
            cin >> a[i][j];
    int prefix[n][m];
    for(int i=1;i<=n;i++)
        for(int j=1;i<=m;j++)
        {
            prefix[0][j]=0;
            prefix[i][0]=0;
        }
    for(int i=1;i<=n;i++)
        for(int j=1;i<=m;j++)
        {
            prefix[i][j]=a[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
        }
    while(q--)
    {
        int x1,x2,y1,y2;
        cin >> y1 >> x1 >> y2 >> x2;
        cout << prefix[y2][x2]-prefix[y1-1][x2]-prefix[y2][x1-1]+prefix[y1-1][x1-1];
    }
}
*/
