/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;

ll adj[10001];
ll n;
set<ll> a;
/*
void magicFunc()
{
	cin >> n;
	FOR(i, 1, n)
	{
		cin >> adj[i];
	}
	ll ans = 0;
	a.insert(adj[1]);
	FOR(i, 1, n)
	{
		auto k = a.begin();
		a.insert(adj[i]);
		if (a.size() == 2)
		{
			for (auto i : a)
				cout << i << " ";
			cout << endl;

			ans++;
			a.erase(k);
		}
	}
	cout << ans;
}*/
void magicFunc()
{
	cin >> n;
	FOR(i, 1, n)
	{
		cin >> adj[i];
	}
	ll ans = 0;
	a.insert(adj[1]);
	FOR(i, 1, n)
	{
		FOR(j, i, n)
		{
			a.insert(adj[j]);
			if (a.size() == 2)
			{
				/*
				for (auto i : a)
					cout << i << " ";
				cout << endl;
				*/
				ans++;
			}
			if (a.size() > 2)
			{
				break;
			}
		}
		a.clear();
	}
	cout << ans;
}
signed main()
{
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	magicFunc();
	return 0;
}
