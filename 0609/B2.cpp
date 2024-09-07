#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll n, k;
   cin >> n >> k;
   ll t = 2 * n - 4;
   ll st = k % t;
   if (st < n)
   {
      cout << st + 1;
   }
   else
   {
      cout << 2 * n - 4 - st + 1;
   }
}