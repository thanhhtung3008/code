#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

string s;

void solve()
{
   cin >> s;
   if (s[0] == 'x')
   {
      s[0] = 'A';
   }
   for (ll i = 0; i < s.size(); i++)
   {
      if (s[i] == 'x')
      {
         s[i] = s[i - 1];
      }
   }
   cout << s;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   solve();
   return 0;
}