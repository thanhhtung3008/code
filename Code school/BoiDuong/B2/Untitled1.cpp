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
        int q;
    cin >> q;
    while(q>0)
    {
        int h1,h2,c1,c2;
        cin >> h1>>h2>>c1>>c2;
        cout << prefix[h2][c2]-prefix[h1-1][c2]-prefix[h2][c1-1]+prefix[h1-1][c1-1];
        q--;
    }


}

