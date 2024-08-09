#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dem(ll a[], ll n)
{
	ll b[n];
	ll x=1;
	b[0]=a[0];
	for (ll i=0;i<n;i++)
	{
		ll dem =0;
		for (ll j=0;j<x;j++)
			if (b[j]==a[i])
			{
				dem++;
			}
		if (dem == 0)
		{
			b[x] = a[i] ;
			x++;
		}
	}
	return x;

}
int main()
{
	ll n;
    cin >> n;
    ll a[n];
    for (ll i=0;i<n;i++)
        cin >> a[i];
    cout << dem(a,n);
	return 0;
}
