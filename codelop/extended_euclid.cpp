#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define MAXN 1000005
const int inf = 1e9 + 7;
const int mod = 1e9 + 7;
ll cnt, d;
ll x[20], y[20];
ll gcd(ll a, ll b)
{
   while (b != 0)
   {
      ll r = a % b;
      a = b;
      b = r;
   }
   return a;
}

ll d;

void extendedeuclid(ll a, ll b)
{
   if (b == 0)
   {
      x[0] = 1;
      y[0] = 0;
      d = a;
      return;
   }
   extendedeuclid(b, a % b);
   cnt++;
   x[cnt] = y[cnt - 1];
   y[cnt] = x[cnt - 1] - a / b * y[cnt - 1];

   // cout << a <<" " << b << " " << x[cnt] <<" "<< y[cnt] <<" "<< a * x[cnt] + b * y[cnt] <<endl;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll a, b, n;
   cin >> a >> b >> n;
   extendedeuclid(abs(a), n);
   vector<ll> ans;
   // ll k = a * x[cnt] + n * y[cnt];
   //  cout << k <<endl;
   if (b % k == 0)
   {
      for (int i = 0; i <= k - 1; i++)
      {
         ans.push_back(((x[cnt] * b / k + n / k * i) % n + n) % n);
      }
      sort(ans.begin(), ans.end());
      cout << ans.size() << endl;
      for (ll x : ans)
      {
         cout << x << endl;
      }
   }
   else
   {
      cout << 0;
   }
}