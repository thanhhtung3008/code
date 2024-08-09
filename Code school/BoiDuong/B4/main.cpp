/*
#include <bits/stdc++.h>
using namespace std;
int main()

/*
    //ifstream cin("test.inp");
    //ofstream cout("test.out");
    int n;
    cin >> n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        a[i]=make_pair(x,i+1);
    }
    sort(a,a+n);
    for(auto i:a)
        cout << i.second << " ";
    }
*/
/*
#include <bits/stdc++.h>
using namespace std;
struct hocsinh
{
    string ten,gt;
    float toan,van,tong;
};
int main()
{
    ifstream cin("test.inp");
    ofstream cout("test.out");
    int n;
    cin >> n;
    hocsinh a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >>a[i].ten >> a[i].gt >> a[i].toan >> a[i].van;
        a[i].tong=a[i].toan+a[i].van;
        cout << a[i].ten << " " << a[i].gt << " " << a[i].tong << endl;
    }
}
*/
/*
#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long dem(long long P, long long x, long long y)
{
    long long c1=P/x;
    long long c2=P/y;
    long long c3=P/((x*y)/(__gcd(x,y)));
    return c1+c2-c3;
}
int main()
{
    ll a,b,c,d;
    cin >> a >> b >>c >>d;
    cout << (b-a+1)-dem(b,c,d)+dem(a-1,c,d);

}
   */
