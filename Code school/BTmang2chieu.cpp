/*
// Bài 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n>>m;
    long long a[n+1][m+1];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            cin >> a[i][j];
    long long maxn=0;
    for(long long i=1;i<=n;i++)
    {
        long long s=0;
        for(long long j=1;j<=m;j++)
            s+=a[i][j];
        maxn=max(s,maxn);
    }
    cout << maxn;
}
*/
/*
// Bài 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n>>m;
    long long a[n+1][m+1];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            cin >> a[i][j];
    long long s=0;
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            if(i==1||i==n)
                s+=a[i][j];
            else if(j==1 || j== m)
                s+=a[i][j];
    cout << s;
}
*/
/*
// Bài 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n>>m;
    long long a[n+1][m+1];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            cin >> a[i][j];
    long long x1,y1,x2,y2,s=0;
    cin >> x1 >> y1 >> x2 >> y2 ;
    for(long long i=x1;i<=x2;i++)
        for(long long j=y1; j <=y2;j++)
            s+=a[i][j];
    cout << s;
}
*/
/*
// Bài 4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n>>m;
    long long a[n+1][m+1];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            cin >> a[i][j];
    long long maxn=0,index=0;;
    for(long long j=1;j<=m;j++)
    {
        long long s=0;
        for(long long i=1;i<=n;i++)
            s+=a[i][j];
        if(maxn<s)
        {
            s=maxn;
            index=j;
        }
    }
    cout << index;
}
*/
/*
// Bài 5
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n>>m;
    long long a[n+1][m+1];
    long long count[2002],maxn=INT_MIN;
    for(long long i=0;i<=n*m;i++)
        count[i]=0;
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
        {
              cin >> a[i][j];
              maxn=max(a[i][j],maxn);
              count[a[i][j]]++;
        }
    cout << count[maxn];
}
#include <bits/stdc++.h>
using namespace std;
int a[1000][1000];
int m,n;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin >> a[i][j];
    }
    int maxn = INT_MIN;
    int res = 0;
    for(int i=1;i<=m;i++)
    {
        int sum = 0;
        for(int j=1;j<=n;j++){
            sum += a[j][i];
        }
        if(sum > maxn)
        {
            res = i;
            maxn = sum;
        }

    }
    cout << res ;
}

*/
/*
// Bài 6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n;
    cin >> n;
    long long a[n+1][n+1];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=n;j++)
        {
              cin >> a[i][j];
        }
    long long t=1;
    if(n%2==0)
    while(n>2)
    {
        long long s=0;
        for(long long i=t;i<=n;i++)
            for(long long j=t;j<=n;j++)
            {
                if(i==t||i==n)
                    s+=a[i][j];
                else if(j==t || j== n)
                    s+=a[i][j];
            }
        cout << s <<endl;

        t++;
        n--;
    }
    else
            while(n>1)
    {
        long long s=0;
        for(long long i=t;i<=n;i++)
            for(long long j=t;j<=n;j++)
            {
                if(i==t||i==n)
                    s+=a[i][j];
                else if(j==t || j== n)
                    s+=a[i][j];
            }
        cout << s <<endl;

        t++;
        n--;
    }
}
*/
