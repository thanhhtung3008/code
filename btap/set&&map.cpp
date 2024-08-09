#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    /*
    long long q;
    cin >> q;
    while(q--)
    {
        long long n;
        cin >>n;
        set<int> kn;
        for(long long i=1;i<=n;i++)
        {
            long long x;
            cin >> x;
            kn.insert(x);
        }
        cout << kn.size() << endl;
    }
    */
    /*
    long long q;
    cin >> q;
    while(q--)
    {
        long long n;
        cin >>n;
        map<int,int> kn;
        for(long long i=1;i<=n;i++)
        {
            long long x;
            cin >> x;
            kn[x]++;
        }
        bool check=false;
        long long x;
        cin >> x;
        if(kn.find(x)!=kn.end())
            cout << "YES";
        else
            cout << "NO";
    }
    */
    /*
    long long n,m;
    cin >> n>>m;
    long long a[n];
    set <int> b;
    for(long long i=1;i<=n;i++)
        cin >>a[i];
    for(long long i=1;i<=m;i++)
    {
        long long x;
        cin >>x;
        b.insert(x);
    }
    bool check=true;
    for(long long i=1;i<=n;i++)
        if(b.find(a[i])==b.end())
        {
              cout << a[i] << " ";
              check=false;
        }
    if(check==true)
        cout << "NO";
    */
    long long q;
    cin >> q;
    while(q--)
    {
        long long n;
        cin >>n;
        map<int,int> kn;
        for(long long i=1;i<=n;i++)
        {
            long long x;
            cin >> x;
            kn[x]++;
        }
        long long t,maxn=0;
        for(map<int,int>::iterator it=kn.begin();it!=kn.end();it++)
        {
            if((*it).second>maxn)
            {
                 maxn=(*it).second;
                 t=(*it).first;
            }
        }
        cout << t << " ";
    }

}
