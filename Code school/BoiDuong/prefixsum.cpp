

/*
int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
        cin >>n;
    int a[n],prefix[n];
    for(int i=1;i<=n;i++)
    {
        cin >>a[i];
    }
    prefix[0]=0;
    for(int i=1;i<=n;i++)
        prefix[i]=prefix[i-1]+a[i];

    int k;
    cin >>k;
    int maxs=0;
    for(int i=1;i<=n;i++)
    {
        if(i+k-1>n)
            break;
        maxs=max(maxs,prefix[i+k-1]-prefix[i-1]);
    }
    cout <<maxs;


}
*/

    //ifstream cin("input.inp");
    //ofstream cout("output.out");
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin >> n>>m;
    long long a[n][m];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin >> a[i][j];
    int prefix[n][m]={0};
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            prefix[0][j]=0;
            prefix[i][0]=0;
        }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
            cout << prefix[i][j] << " ";
        }
    }

}
    cin >>q;
    while(q)
    {
        int h1,h2,c1,c2;
        cin >> h1,h2,c1,c2;
        cout << prefix[h2][c2]-prefix[h1-1][c2]-prefix[h2][c1-1]+prefix[h1-1][c1-1];
    }
}
/*
#include<bits/stdc++.h>
#define Nmax 1000000
using namespace std;
long long a[100][100],s[100][100];
long long n,m,k;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream cin("input.inp");
    ofstream cout("output.out");
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    /*
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            s[0][j]=0;
            s[i][0]=0;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    cin >>k;
    while(k--)
    {
        int h1,h2,c1,c2;
        cin >> h1>>c1>>h2>>c2;
        int b=(s[h2][c2]-s[h1-1][c2]-s[h2][c1-1]+s[h1-1][c1-1]);
        cout << b << endl;
    }
    return 0;

}
*/
