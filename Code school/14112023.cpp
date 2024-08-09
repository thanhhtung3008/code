/*
#include <bits/stdc++.h>
using namespace std;
int main()
{

    //ifstream cin("test.inp");
    //ofstream cout("test.out");
    int x;
    long long somax = LONG_MIN;

    int n,dem=0;
    cin >> n;
    int a[100000];
    for (int i=0;i<n;i++)
    {
        for (int j=0;i<n;j++)
        {
            cin >> x;
            a[x]++;
        }
        somax=max(somax,a);
    }
    sort(a+1,a+nmax+1,greater<int>());
    for(int i=1;i<=k;i++)
        rex+=a[i];
    cout << rex;

#include<bits/stdc++.h>

using namespace std;

int a[1000000],m,n,k,kq,i,j,x,nmax=LONG_MIN;

int main()

{



    cin>>n>>k;

    for(i=1;i<=n;i++)

    for(j=1;j<=n;j++)

    {

        cin>>x;

        a[x]++;

        nmax=max(nmax,x);

    }

    sort(a+1,a+nmax+1,greater<int>());

    kq=0;

    for(i=1;i<=k;i++)

    kq+=a[i];

    cout<<kq;

    return 0;

}
*/

#include <bits/stdc++.h>
using namespace std;
string cong(string s1,s2)
{
    int nho;
    while(s1.size()<s2.size())
            s1='0'+s1;
    while(s2.size()>s1.size())
            s2='0'+s2;
    string res=" ";
    for(int i=s1.size()-1;i>=0;i--)
    {
        int t=(s1[i]-48)+(s2[i]-48)+nho;
        nho=t/10;
        t=t%10;
        res=char(t+48)+res;
    }
    if(nho>1)
        res='1'+res;
return res;
}
int main()
{
    string s1,s2;
    cin >> s1>>s2;
    cout <<
}











