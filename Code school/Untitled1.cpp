#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    int n;
    cin >> n;
    int a[n],f[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    f[0]=0;
    for (int i=0;i<=n;++i)
        f[i]=f[i-1]+a[i];
    int maxsum=0,fmin=0;
    for (int i=0;i<=n;++i)
    {
        fmin=min(fmin,f[i]);
        maxsum=max(maxsum,f[i]-fmin);
        cout << fmin << " " << maxsum;
    }
    cout << fmin;
    return 0;
    */
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    int tl,s=0d
    ;
    tl=-LONG_MAX;
    for (int i=0;i<n;i++)
    {
        s+=a[i];
        if (s>tl) tl = s;
        if (s<0) s=0;
    }
    cout << tl;
}
