#include <bits/stdc++.h>
using namespace std;
long long n;

struct dsach
{
    string ten,lop;
    float toan,van,anh;

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    cin >> n;
    dsach hs[n+1];
    for(int i=1;i<=n;i++)
    cin>>hs[i].ten>>hs[i].lop>>hs[i].toan>>hs[i].van>>hs[i].anh;
    for(int i=1;i<=n;i++)
        cout<<hs[i].ten<<" "<<hs[i].lop<<" "<<(hs[i].toan+hs[i].van+hs[i].anh)/3<<endl;
}

