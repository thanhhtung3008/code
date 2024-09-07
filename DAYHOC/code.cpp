#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("input.inp", "r", stdin);
   freopen("output.out", "w", stdout);
   long long n;
   cin >> n;
   // ƯCLN và BCNN
   long long k = __gcd(a, b);           // ƯCLN
   long long c = (a * b) / __gcd(a, b); // BCNN

   // Tổng chữ số
   long long s = 0;
   while (n > 0)
   {
      s += (n % 10);
      n /= 10;
   }
   // Số lượng chữ số
   long long dem = 0;
   while (n > 0)
   {
      dem++;
      n /= 10;
   }
   // Tổng chũ số và số lượng chữ số
   long long s = 0, dem = 0;
   while (n > 0)
   {
      dem++;
      s += (n % 10);
      n /= 10;
   }
   // Bool nguyên tố : 1 số
   bool check = true;
   for (long long i = 2; i <= sqrt(n); i++) // n<=10^17 và không xét trong mảng
   {
      if (n % i == 0)
      {
         check = false;
         break;
      }
   }
   if (check == true)
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }
   // Sàng nguyên tố n<=10^6-10^7 nhiều số
   bool check[1000006];
   for (long long i = 1; i <= 1000006; i++)
   {
      check[i] = true;
   }
   check[0] = false;
   check[1] = false;
   for (long long i = 2; i <= sqrt(1000006); i++)
   {
      if (check[i] == true)
      {
         for (long long j = i * i; j <= 1000006; j += i)
         {
            check[j] = false;
         }
      }
   }
   long long n;
   cin >> n;
   cout << check[n]; // 1=true 0=false;
   if (check[n] == 1)
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }

   long long k;
   cin >> k;
   for(long long i=1;i<=k;i++)
   {
      long long n;
      cin >> n;
      if(check[n]==true)
      {
         cout <<"YES";
      }
      else
      {
         cout << "NO";
      }
   }
}