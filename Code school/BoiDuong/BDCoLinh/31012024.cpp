/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n >>m;
    long long x,y;
    /*
    long long b[n+1][m+1];
    for(long long a=0;a<=n;a++)
    {
        for(long long c=0;c<=m;c++)
            b[a][c]=0;
    }
    for(long long i=0;i<m;i++)
    {
        cin >> x >> y;
        b[x][y]=1;
        b[y][x]=1;
    }
    for(long long a=0;a<n;a++)
    {
        for(long long c=0;c<m;c++)
            cout << b[a][c] << " ";
        cout << endl;
    }
    *//*
    vector <int> a[1000];
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(long long i=0;i<=n;i++)
        if(a[i].size()==0)
            continue;
        else
            cout << a[i].size() << " ";


}
/*
    long long n,m;
    cin >> n >>m;
    long long c,d;
    vector <int> a[1000];
	for(int i = 0; i < m; i++)
	{
        cin >> c >> d;
        a[c].push_back(d);
        a[d].push_back(c);
	}

    for(int i = 0; i <n; i++)
	{
	    cout<<i<<':';
		for(int j = 0; j <a[i].size(); j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
    /*
    long long b[n+1][m+1];
    for(long long a=0;a<=n;a++)
    {
        for(long long c=0;c<=m;c++)
            b[a][c]=0;
    }
    for(long long a=0;a<=n-1;a++)
    {
        long long i,j;
        cin >> i >> j;
        b[i][j]=1;
        //b[j][i]=1;
    }
    for(long long a=0;a<=n-1;a++)
    {
        for(long long c=0;c<=m-1;c++)
            cout << b[a][c] << " ";
        cout << endl;
    }
    */
    /*
    // Bài 1
    long long n,m;
    cin >> n >>m;
    for(long long i=-;i<=m;i++)
        */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n,m;
    cin >> n >>m;
    long long c,d;
    vector <int> a[1000];
    vector <int> b[1000];
	for(int i = 0; i < m; i++)
	{
        cin >> c >> d;
        a[c].push_back(d);
        b[c].push_back(d);
        b[d].push_back(c);
	}
    long long q;
    cin >>q;
    while(q--)
    {
        char x;
        long long u;
        cin >> x >> u;
        if(x=='+')
            cout << a[u].size() << endl;
        else if(x=='-')
            cout << b[u].size()-a[u].size() << endl;
    }
}

