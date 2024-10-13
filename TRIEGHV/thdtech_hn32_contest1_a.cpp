#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
const ll maxn = 1e6 + 9;

using namespace std;

ll n, a[maxn], k;
bool check[maxn];
vector<ll> p;

void snt()
{
   memset(check, true, sizeof(check));
   check[0] = check[1] = false;
   for (ll i = 2; i * i <= maxn; i++)
   {
      if (check[i])
      {
         for (ll j = i * i; j <= maxn; j += i)
         {
            check[j] = false;
         }
      }
   }
}

void solve()
{
   snt();
   cin >> n >> k;
   for (ll i = 1; i <= n; i++)
   {
      cin >> a[i];
      a[i] += k;
   }
   for (ll i = 1; i <= n; i++)
   {
      if (check[a[i]])
      {
         p.push_back(i);
      }
   }
   cout << p.size() << endl;
   for (ll i : p)
   {
      cout << i << " ";
   }
}

int main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   solve();
   return 0;
}