#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x_1, y_1, x_2, y_2;
ll u_1, v_1, u_2, v_2;
void inp()
{
   cin >> x_1 >> y_1 >> x_2 >> y_2;
   cin >> u_1 >> v_1 >> u_2 >> v_2;
}
void magicFunc()
{
   ll x_l = max(x_1, u_1);
   ll y_l = min(y_1, v_1);
   ll x_r = min(x_2, u_2);
   ll y_r = max(y_2, v_2);
   ll w = x_r - x_l;
   ll h = y_l - y_r;
   if (w > 0 && h > 0)
   {
      cout << w * h;
   }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   inp();
   magicFunc();
   return 0;
}